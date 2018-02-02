#include <cstdio>
#include <iterator>


#ifndef _TIC_TAC_TOE_H
#define _TIC_TAC_TOE_H

// Switch alpha-beta pruning on or off
#define AB_PRUNE 1

#include <iostream>
#include <cstdint>

// Represents a tic-tac-toe game state including the history,
// i.e. a node in the game tree.
class TicTacToe {
public:
    typedef int_fast8_t smallint;
    static const smallint MAX = 1, MIN = -1, ZERO = 0,
                          INF = 64, N_POS = 9;

    // For statistical purpose
    static int win_counter[],
               lose_counter[],
               draw_counter,
               leaf_counter,
               node_counter;

    // Construct the root node and its descendants (i.e. the complete game tree)
    TicTacToe();

    // Destroy the (sub)tree recursively
    ~TicTacToe();

    // It is MAX's or MIN's turn.
    // For empty board, turn is MAX.
    const smallint turn;

    // The latest move (0 ~ 8) that led to the current state
    // (meaningless for root node)
    const smallint move;

    // Depth of the node in the tree (0 ~ 9)
    const smallint depth;

    // Current MAX's payoff
    // (1) X wins
    //     MAX * (10 - depth)
    // (2) O wins
    //     MIN * (10 - depth)
    // (3) Draw
    //     ZERO
    smallint v;

    smallint alpha, beta;

    // The stone at each board position is MAX, MIN, or ZERO.
    smallint s[N_POS];

    // The previous TicTacToe state (parent node)
    // For the empty board (root node), parent is nullptr
    const TicTacToe *parent;

    // Array containing pointers to the child nodes, indexed by the move (0 ~ 8).
    // nullptr indicates a nonexistent (invalid) child node.
    TicTacToe *children[N_POS] = {};

    TicTacToe *get_child(smallint move);

    // Check if the last player has just won the game
    bool is_win() const;

    // Perform minimax search while constructing child nodes
    // This is called during construction if necessary.
    void search();

private:
    // Construct a non-root node and its descendants,
    // given its parent node and the move (0 ~ 8) from the parent state to the current state
    TicTacToe(const TicTacToe *parent, smallint move, smallint alpha, smallint beta);
};

// Print the current TicTacToe board to ostream
std::ostream &operator<<(std::ostream &out, const TicTacToe &ttt);

#endif
TicTacToe *TicTacToe::get_child(smallint move) {
    if (!children[move])
        children[move] = new TicTacToe(this, move, -INF, +INF);
    return children[move];
}
int TicTacToe::win_counter[N_POS + 1] = {},
    TicTacToe::lose_counter[N_POS + 1] = {},
    TicTacToe::draw_counter = 0,
    TicTacToe::leaf_counter = 0,
    TicTacToe::node_counter = 0;

bool TicTacToe::is_win() const {
    const smallint pt = parent->turn;
    switch (move) {
    case 0:
        return (s[1] == pt && s[2] == pt) ||
               (s[3] == pt && s[6] == pt) ||
               (s[4] == pt && s[8] == pt);
    case 1:
        return (s[0] == pt && s[2] == pt) ||
               (s[4] == pt && s[7] == pt);
    case 2:
        return (s[1] == pt && s[0] == pt) ||
               (s[5] == pt && s[8] == pt) ||
               (s[4] == pt && s[6] == pt);
    case 3:
        return (s[4] == pt && s[5] == pt) ||
               (s[0] == pt && s[6] == pt);
    case 4:
        return (s[3] == pt && s[5] == pt) ||
               (s[1] == pt && s[7] == pt) ||
               (s[0] == pt && s[8] == pt) ||
               (s[2] == pt && s[6] == pt);
    case 5:
        return (s[4] == pt && s[3] == pt) ||
               (s[2] == pt && s[8] == pt);
    case 6:
        return (s[7] == pt && s[8] == pt) ||
               (s[3] == pt && s[0] == pt) ||
               (s[4] == pt && s[2] == pt);
    case 7:
        return (s[6] == pt && s[8] == pt) ||
               (s[4] == pt && s[1] == pt);
    case 8:
        return (s[7] == pt && s[6] == pt) ||
               (s[5] == pt && s[2] == pt) ||
               (s[4] == pt && s[0] == pt);
    default:
        return false;
    }
}

TicTacToe::TicTacToe():
        turn(MAX), move(-1), depth(0), alpha(-INF), beta(+INF), s(), parent(nullptr) {
    ++node_counter;
    search();
}

TicTacToe::TicTacToe(const TicTacToe *parent, smallint move, smallint alpha, smallint beta):
        turn(-parent->turn), move(move), depth(parent->depth + 1),
        alpha(alpha), beta(beta), parent(parent) {
    ++node_counter;
    std::copy(std::begin(parent->s), std::end(parent->s), s);
    s[move] = parent->turn;
    bool iswin = is_win(),
         isfull = depth == N_POS;
    if (iswin || isfull) {
        // Game just ended.
        ++leaf_counter;
        if (iswin) {
            // Someone just won.
            if (parent->turn == MAX)
                ++win_counter[depth];
            else
                ++lose_counter[depth];
            v = parent->turn * (10 - depth);
        } else {
            // Draw
            ++draw_counter;
            v = ZERO;
        }
    } else {
        // Search for further cases
        search();
    }
}

void TicTacToe::search() {
    if (turn == MAX) {
        smallint max = -INF;
        for (smallint p = 0; p < N_POS; ++p) {
            if (s[p] == ZERO) {
                // ReSharper disable once CppNonReclaimedResourceAcquisition
                children[p] = new TicTacToe(this, p, alpha, beta);
                if (children[p]->v > max) {
                    max = children[p]->v;
#if AB_PRUNE
                    if (max > alpha && (alpha = max) >= beta)
                        break;
#endif
                }
            }
        }
        v = max;
    } else {
        smallint min = +INF;
        for (smallint p = 0; p < N_POS; ++p) {
            if (s[p] == ZERO) {
                // ReSharper disable once CppNonReclaimedResourceAcquisition
                children[p] = new TicTacToe(this, p, alpha, beta);
                if (children[p]->v < min) {
                    min = children[p]->v;
#if AB_PRUNE
                    if (min < beta && (beta = min) <= alpha)
                        break;
#endif
                }
            }
        }
        v = min;
    }
}

TicTacToe::~TicTacToe() {
    for (TicTacToe *child : children)
        delete child;
}

// Visualize a stone
char v(int s) {
    const char X = 'x', O = 'o', S = ' ';
    if (s == TicTacToe::MAX)
        return X;
    else if (s == TicTacToe::MIN)
        return O;
    else // if (s == TicTacToe::ZERO)
        return S;
}

std::ostream &operator<<(std::ostream &out, const TicTacToe &t) {
    const int BUFSIZE = 256;
    char buffer[BUFSIZE];
    snprintf(
        buffer, BUFSIZE,
        "+---+---+---+\n"
        "| %c | %c | %c |\n"
        "+---+---+---+\n"
        "| %c | %c | %c |\n"
        "+---+---+---+\n"
        "| %c | %c | %c |\n"
        "+---+---+---+\n",
        v(t.s[0]), v(t.s[1]), v(t.s[2]),
        v(t.s[3]), v(t.s[4]), v(t.s[5]),
        v(t.s[6]), v(t.s[7]), v(t.s[8])
    );
    return out << buffer;
}

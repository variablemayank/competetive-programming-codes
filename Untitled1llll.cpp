	#include <iostream>
	#include <sstream>
	#include <iomanip>
	#include<bits/stdc++.h>
	
	
	using namespace std;
	
	const char human = 'X';
	const char ai = 'O';
	
	enum Player { HUMAN, AI };
	
	struct Move {
		int x;
		int y;
	};
	
	class Game {
		char board[3][3];
	
	public:
		Game();
	
		void printBoard();
		// Prints the board pretty-ly
	
		bool gameOver();
		// Returns true if a winner has been found or there are no empty spaces
	
		bool checkWin(Player player);
		// Checks for a win
	
		void play();
		// Primary game driver, loops through turn-by-turn until there's
		// a winner or full game board (draw)
	
		void getHumanMove();
		// Takes in values from the input stream and places them on the board
		// if valid.  Expects input in coordinate notation, ex (1,3)
	
		int score();
		// Function to score game board states based on their outcome
		// Returns 10 for human win, -10 for AI win, 0 for draw
	
		Move minimax(char AIboard[3][3]);
		// Returns the best AI move's x, y coords via the minimax algorithm
	
		int minSearch(char AIboard[3][3]);
		// minimax helper fn for finding the next move for AI player, chooses the 
		// move with the least possible score
	
		int maxSearch(char AIboard[3][3]);
		// minimax helper fn for finding the next move for human player, chooses
		// the move with the least possible score
	};
	
	Game::Game() {
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				board[i][j] = '-';
			}
		}
	}
	
	void Game::printBoard() {
		cout << "-------------------";
		for(int i = 0; i < 3; i++) {
			cout << '\n' << "|";
			for(int j = 0; j < 3; j++) {
				cout << setw(3) << board[i][j] << setw(3) << " |";
			}
		}
		cout << '\n' << "-------------------" << '\n';
	}
	
	bool Game::gameOver() {
		if(checkWin(HUMAN)) return true;
		else if(checkWin(AI)) return true;
	
		bool emptySpace = false;
		for(int i = 0; i < 3; i++) {
			if(board[i][0] == '-' || board[i][1] == '-' || board[i][2] == '-')
				emptySpace = true;
		}
		return !emptySpace;
	}
	
	bool Game::checkWin(Player player) {
		char playerChar;
		if(player == HUMAN) playerChar = human;
		else playerChar = ai;
	
		for(int i = 0; i < 3; i++) {
			// Check horizontals
			if(board[i][0] == playerChar && board[i][1] == playerChar
				&& board[i][2] == playerChar)
				return true;
	
			// Check verticals
			if(board[0][i] == playerChar && board[1][i] == playerChar
				&& board[2][i] == playerChar)
				return true;
		}
	
		// Check diagonals
		if (board[0][0] == playerChar && board[1][1] == playerChar 
			&& board[2][2] == playerChar) {
			return true;
		} else if (board[0][2] == playerChar && board[1][1] == playerChar 
			&& board[2][0] == playerChar) {
			return true;
		}
	
		return false;
	}
	
	int Game::score() {
		if(checkWin(HUMAN)) { return 10; }
		else if(checkWin(AI)) { return -10; }
		return 0; // draw
	}
	
	Move Game::minimax(char AIboard[3][3]) { 
		int bestMoveScore = 100; // -100 is arbitrary
		Move bestMove;
	
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if(AIboard[i][j] == '-') {
					AIboard[i][j] = ai;
					int tempMoveScore = maxSearch(AIboard);
					if(tempMoveScore <= bestMoveScore) {
						bestMoveScore = tempMoveScore;
						bestMove.x = i;
						bestMove.y = j;
					}
					AIboard[i][j] = '-';
				}
			}
		}
	
		return bestMove;
	}
	
	int Game::maxSearch(char AIboard[3][3]) {
		if(gameOver()) return score();
		Move bestMove;
	
		int bestMoveScore = -1000;
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if(AIboard[i][j] == '-') {
					AIboard[i][j] = human;
					int tempMoveScore = minSearch(AIboard);
					if(tempMoveScore >= bestMoveScore) {
						bestMoveScore = tempMoveScore;
						bestMove.x = i;
						bestMove.y = j;
					}
					AIboard[i][j] = '-';
				}
			}
		}
	
		return bestMoveScore;
	}
	
	int Game::minSearch(char AIboard[3][3]) {
		if(gameOver()) return score();
		Move bestMove;
	
		int bestMoveScore = 1000; 
		for(int i = 0; i < 3; i++) {
			for(int j = 0; j < 3; j++) {
				if(AIboard[i][j] == '-') {
					AIboard[i][j] = ai;
					int tempMove = maxSearch(AIboard);
					if(tempMove <= bestMoveScore) {
						bestMoveScore = tempMove;
						bestMove.x = i;
						bestMove.y = j;
					}
					AIboard[i][j] = '-';
				}
			}
		}
	
		return bestMoveScore;
	}
	
	void Game::getHumanMove() {
		int x, y = -1; // arbitrary assignment to init loop
		while(x < 0 || x > 2 || y < 0 || y > 2) {
			// Loop until a valid move is entered
			cout << "Enter your move in coordinate form, ex: (1,3)." << endl;
			cout << "Your Move: ";
			char c;
			string restofline;
			cin >> c >> c;
			x = c - '0' - 1;
			cin >> c >> c;
			y = c - '0' - 1;
			getline(cin, restofline); // get garbage chars after move
		}
		board[x][y] = human;
	}
	
	void Game::play() {
		int turn = 0;
		printBoard();
		while(!checkWin(HUMAN) && !checkWin(AI) && !gameOver()) {
			// human move
			if(turn % 2 == 0) {
				getHumanMove();
				if(checkWin(HUMAN)) cout << "Human Player Wins" << endl;
				turn++;
				printBoard();
			} else {
				cout << endl << "Computer Player Move:" << endl;
				Move AImove = minimax(board);
				board[AImove.x][AImove.y] = ai;
				if(checkWin(AI)) cout << "Computer Player Wins" << endl;
				turn++;
				printBoard();
			}
		}
	}
	int main() {
	Game tictactoe;

	tictactoe.play();

	return 0;
}

#include <bits/stdc++.h>
using std::vector;
using std::tuple;

/*
 * Take out adding\removing logic llo separate class.
 * It provides functions to add and remove numbers from
 * our structure, while mallaining cnt[] and current_answer.
 * 
 */
struct Mo
{
    static constexpr ll MAX_VALUE = 1005000;
    vector<long long> cnt;
    long long current_answer;

    void process(ll number, ll delta)
    {
        current_answer -= cnt[number] * cnt[number] * number;
        cnt[number] += delta;
        current_answer += cnt[number] * cnt[number] * number;
    }
public:
    Mo()
    {
        cnt = vector<long long>(MAX_VALUE, 0);
        current_answer = 0;
    }

    long long get_answer() const
    {
        return current_answer;
    }

    void add(ll number)
    {
        process(number, 1);
    }

    void remove(ll number)
    {
        process(number, -1);
    }
};

ll main()
{
    ll N, Q, BLOCK_SIZE;
    std::cin.sync_with_stdio(false);
    std::cin >> N >> Q;
    BLOCK_SIZE = static_cast<ll>(sqrt(N));

    // No global variables, everything inside.
    vector<ll> arr(N);
    vector<long long> answers(Q);
    vector< tuple<ll, ll, ll> > queries;
    queries.reserve(Q);

    for(ll i = 0; i < N; i++)
        std::cin >> arr[i];

    for(ll i = 0; i < Q; i++) {
        ll le, rg;
        std::cin >> le >> rg;
        queries.emplace_back(le, rg, i);
    }

    // Comparator as a lambda-function, which catches BLOCK_SIZE
    // from the above definition.
    auto mo_cmp = [BLOCK_SIZE](const tuple<ll, ll, ll> &x,
            const tuple<ll, ll, ll> &y) -> bool {
        ll block_x = std::get<0>(x) / BLOCK_SIZE;
        ll block_y = std::get<0>(y) / BLOCK_SIZE;
        if(block_x != block_y)
            return block_x < block_y;
        return std::get<1>(x) < std::get<1>(y);
    };

    std::sort(queries.begin(), queries.end(), mo_cmp);

    Mo solver;
    ll mo_left = 0, mo_right = -1;

    // Usual Mo's algorithm stuff.
    for(const auto &q: queries) {
        ll left, right, answer_idx;
        std::tie(left, right, answer_idx) = q;

        while(mo_right < right) {
            mo_right++;
            solver.add(arr[mo_right]);
        }
        while(mo_right > right) {
            solver.remove(arr[mo_right]);
            mo_right--;
        }

        while(mo_left < left) {
            solver.remove(arr[mo_left]);
            mo_left++;
        }
        while(mo_left > left) {
            mo_left--;
            solver.add(arr[mo_left]);
        }

        answers[answer_idx] = solver.get_answer();
    }

    for(ll i = 0; i < Q; i++)
        std::cout << answers[i] << "\n";
    return 0;
}

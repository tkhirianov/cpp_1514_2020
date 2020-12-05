#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> A;
    int N = 10;
    A.resize(N);
    for (int i = 0; i < A.size(); i++) {
        cin >> A[i];
    }
    int max_pair_sum = -1;
    int x, y;
    for (int i = 0; i < N-1; i++) {
        // расстояние между элементами i и k не менее 5
        for (int k = i + 5; k < N; k++) {
            int pair_sum = A[i] + A[k];
            if (pair_sum > max_pair_sum) {
                max_pair_sum  = pair_sum;
                x = A[i];
                y = A[k];
            }
        }
    }
    cout << max_pair_sum << '\n';
    cout << x << y << '\n';

    return 0;
}

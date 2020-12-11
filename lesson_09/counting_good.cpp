#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int main()
{
    int N = 10;
    int x;
    vector<int> counters = {0, 0, 0, 0};

    for (int i = 0; i < N; i++) {
        cin >> x; // assert(x >= 0 and x <= 3);
        counters[x]++;
    }
    for (int x = 0; x < 4; x++)
        cout << counters[x] << '\n';

    return 0;
}

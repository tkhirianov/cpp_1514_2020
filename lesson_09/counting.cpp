#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 10;
    int counter_0 = 0;
    int counter_1 = 0;
    int counter_2 = 0;
    int counter_3 = 0;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        if (x == 0) {
            counter_0++;
        } else if (x == 1) {
            counter_1++;
        } else if (x == 2) {
            counter_2++;
        } else if (x == 3) {
            counter_3++;
        }
    }
    cout << counter_0 << '\t';
    cout << counter_1 << '\t';
    cout << counter_2 << '\t';
    cout << counter_3 << '\n';

    return 0;
}

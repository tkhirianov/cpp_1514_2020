#include <vector>
#include <iostream>
using namespace std;
int main()
{
    int m, n;
    cin >> m >> n;
    if (m < n) {
        cout << 2 * m + (m + n) % 2 << '\n';
    } else {
        cout << 2 * n + (m + n) % 2 << '\n';
    }


    return 0;
}

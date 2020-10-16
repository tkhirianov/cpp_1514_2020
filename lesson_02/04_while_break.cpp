#include <iostream>
using namespace std;

int main()
{
    int64_t s = 1;
    int64_t x;

    while (true)
    {
        cin >> x;
        if (0 == x) break; // goto EXIT;
        s += x;
    }
EXIT:
    cout << "sum of numbers is " << s << ".\n";
    return 0;
}

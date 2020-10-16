#include <iostream>
using namespace std;

int main()
{
    int64_t s = 0;
    int64_t x;
    cin >> x;
    while (x != 0)
    {
        s += x;
        cin >> x;  // похоже на итерирование
    }
    cout << "sum of numbers is " << s << ".\n";
    return 0;
}

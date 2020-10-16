#include <iostream>
using namespace std;

int main()
{
    int64_t s = 0;
    int n;
    cout << "Enter number of numbers: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        int64_t x;
        cin >> x;
        s += x;
        i += 1;
    }
    cout << "sum of numbers is " << s << ".\n";
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int64_t s = 0;
    int n;
    cout << "Enter number of numbers: ";
    cin >> n;
    for(int i = 0; i < n; i += 1)
    {
        int64_t x;
        cin >> x;
        s += x;
    }
    cout << "sum of numbers is " << s << ".\n";
    return 0;
}

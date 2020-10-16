#include <iostream>
using namespace std;

int main()
{
    int32_t x = 2;
    int32_t y = 5;

    cout << "x = " << x << ", y = " << y << "\n";
    auto tmp = x;
    x = y;
    y = tmp;
    cout << "x = " << x << ", y = " << y << "\n";
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "x = " << x << ", y = " << y << "\n";

    return 0;
}

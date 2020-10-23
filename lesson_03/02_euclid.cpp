#include <iostream>
using namespace std;

int main()
{
    int64_t a;
    int64_t b;

    cin >> a >> b;

    while (a != 0 and b != 0) {
        // уменьшаю большее число при помощи меньшего
        if (a > b) {
            cout << "DEBUG, case 1: " << a << " " << b << '\n';
            a = a % b;  // взять остаток
        } else {
            cout << "DEBUG, case 2: " << a << " " << b << '\n';
            b %= a; // сокращённая форма взятия остатка с присваиванием
        }
    }

    cout << (a + b) << '\n';
}

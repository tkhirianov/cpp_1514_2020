#include <iostream>
using namespace std;

int main()
{
    int64_t a;
    int64_t b;

    cin >> a >> b;

    while (b != 0) {
        // ѕ”—“№ a >= b
        a = a % b;  // вз€ть остаток
        auto tmp = a;
        a = b;
        b = tmp;
    }

    cout << a << '\n';
}

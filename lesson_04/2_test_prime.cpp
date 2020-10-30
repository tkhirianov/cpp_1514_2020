#include <iostream>
using namespace std;

int main()
{
    int64_t x;
    cin >> x;
    if (x <= 1) {   // НЕ НУЖНО ДЛЯ АВТОТЕСТИРУЕМОГО КОДА (на олимпиадах)
        cerr << "ERROR: x should not be negative!\n";
        exit(1);
    }

    bool is_prime = true;
    int64_t d = 2;
    while (d * d <= x) // перебираем разумные нетривиальные делители
    {
        if (x % d == 0) {
            is_prime = false;
            break; // число уже не простое - дальше бежать не нужно
        }
        d += 1;
    }
    cout << "Number is " << (is_prime ? "" : "not ") << "prime.\n";
}

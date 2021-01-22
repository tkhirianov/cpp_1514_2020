#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter braces sequence: ";
    cin >> s;
    // я очень надеюсь, что в строке s “ќЋ№ ќ круглые скобки
    int n = 0;
    for(auto symbol: s) {
        // cerr << symbol << " ";
        if (symbol == '(') {
            n += 1;
        } else if (symbol == ')') {
            n -= 1;
            if (n < 0) break;  // Ѕью тревогу! Ћишн€€ ')'.
        }
    }
    if (n == 0) {
        cout << "It's correct!\n";
    } else {
        cout << "It's wrong!!!\n";
    }

    return 0;
}

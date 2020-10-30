#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int64_t m1 = LLONG_MIN;
    int64_t m2 = LLONG_MIN;
    int64_t x;
    cin >> x;
    while (x != 0)  // проверка, что x не терминальный
    {
        if (x > m1) {
            m2 = m1;
            m1 = x;
        } else if (x > m2) {
            m2 = x;
        }
        cin >> x;  // считываем x для следующей итерации
    }
    if (m1 == LLONG_MIN or m2 == LLONG_MIN) {
        cout << "Too short! There are no two numbers in succession.\n";
    } else {
        cout << m1 << ' ';
        cout << m2;
    }
}

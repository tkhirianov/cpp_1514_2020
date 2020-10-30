#include <iostream>
#include <climits>

using namespace std;

int NUMERIC_BASE = 10;

int main()
{
    int num_of_digits = 0;
    int sum_of_digits = 0;
    int production_of_digits = 1;
    int max_digit = -1;
    int min_digit = NUMERIC_BASE;

    int64_t x, y;
    cin >> x;
    y = (x >= 0) ? x : -x;  // абсолютное значение x
    while (y != 0)  // проверка, что число ещё имеет цифры
    {
        int digit = y % NUMERIC_BASE;

        num_of_digits += 1;
        sum_of_digits += digit;
        production_of_digits *= digit;
        max_digit = max(max_digit, digit);
        min_digit = min(min_digit, digit);

        y = y / NUMERIC_BASE;
    }1
    cout << "num_of_digits = " << num_of_digits << '\n';
    cout << "sum_of_digits = " << sum_of_digits << '\n';
    cout << "production_of_digits = " << production_of_digits << '\n';
    cout << "max_digit = " << max_digit << '\n';
    cout << "min_digit = " << min_digit << '\n';
}

#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

int main()
{
    int N = 20; // N может быть ГИГАНТСКИМ
    int x;
    int diapasone = 10;
    vector<int> counters(diapasone);
    for (int x = 0; x < diapasone; x++) {
        counters[x] = 0; // зануление всех счётчиков
    }
    // однопроходная процедура подсчёта частот (количеств каждого числа в потоке)
    for (int i = 0; i < N; i++) {
        cin >> x; // assert(x >= 0 and x < diapasone);
        counters[x]++;
    }
    // Разбираемся с нашим массивом частот.
    int max_value_of_counter = 0;
    for (int x = 0; x < diapasone; x++) {
        if (counters[x] > max_value_of_counter) {
            max_value_of_counter = counters[x];
        }
    }
    // выведем все иксы, для которых частота совпадает с максимальной
    cout << "The most popular number(s): ";
    for (int x = 0; x < diapasone; x++) {
        if (counters[x] == max_value_of_counter)
            cout << x <<'\t';
    }
    cout << '\n';

    return 0;
}

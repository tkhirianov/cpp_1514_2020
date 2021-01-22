#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
В первой строке дано число N.
Затем следует N строк, содержащих
    имя латиницей (до 50 символов)
    возраст (число от 0 до 200)
Найти все имена максимального возраста.
*/

int main()
{
    int N;
    cin >> N;
    vector<string> names(N);
    vector<int> ages(N);

    // считывание всего в массив
    for (int i = 0; i < N; i++) {
        string name;
        int age;
        cin >> name >> age;
        names[i] = name;
        ages[i] = age;
    }
    // поиск максимального возраста
    int max_age = -1;
    for (int i = 0; i < N; i++) {
        if (ages[i] > max_age) {
            max_age = ages[i];
        }
    }

    // распечатка всех имён, у которых возраст равен максимальному
    for (int i = 0; i < N; i++) {
        if (ages[i] == max_age) {
            cout << names[i] << endl;
        }
    }

    return 0;
}


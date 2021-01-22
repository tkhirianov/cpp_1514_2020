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
struct Person {
    string name;
    int age;
};

ostream& operator <<(ostream &out, Person &one)
{
    out << "[" << one.name << "]";
    return out;
}

int main()
{
    int N;
    cin >> N;
    vector<Person> crowd(N);

    // считывание всего в массив
    for (int i = 0; i < N; i++) {
        Person one;
        cin >> one.name >> one.age;
        crowd[i] = one;
    }
    // поиск максимального возраста
    int max_age = -1;
    for (int i = 0; i < N; i++) {
        if (crowd[i].age > max_age) {
            max_age = crowd[i].age;
        }
    }

    // распечатка всех имён, у которых возраст равен максимальному
    for (int i = 0; i < N; i++) {
        if (crowd[i].age == max_age) {
            cout << crowd[i] << endl;
        }
    }

    return 0;
}


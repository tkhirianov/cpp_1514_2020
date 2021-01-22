#include <iostream>
#include <vector>
#include <string>
using namespace std;

/*
� ������ ������ ���� ����� N.
����� ������� N �����, ����������
    ��� ��������� (�� 50 ��������)
    ������� (����� �� 0 �� 200)
����� ��� ����� ������������� ��������.
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

    // ���������� ����� � ������
    for (int i = 0; i < N; i++) {
        Person one;
        cin >> one.name >> one.age;
        crowd[i] = one;
    }
    // ����� ������������� ��������
    int max_age = -1;
    for (int i = 0; i < N; i++) {
        if (crowd[i].age > max_age) {
            max_age = crowd[i].age;
        }
    }

    // ���������� ���� ���, � ������� ������� ����� �������������
    for (int i = 0; i < N; i++) {
        if (crowd[i].age == max_age) {
            cout << crowd[i] << endl;
        }
    }

    return 0;
}


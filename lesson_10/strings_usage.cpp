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

int main()
{
    int N;
    cin >> N;
    vector<string> names(N);
    vector<int> ages(N);

    // ���������� ����� � ������
    for (int i = 0; i < N; i++) {
        string name;
        int age;
        cin >> name >> age;
        names[i] = name;
        ages[i] = age;
    }
    // ����� ������������� ��������
    int max_age = -1;
    for (int i = 0; i < N; i++) {
        if (ages[i] > max_age) {
            max_age = ages[i];
        }
    }

    // ���������� ���� ���, � ������� ������� ����� �������������
    for (int i = 0; i < N; i++) {
        if (ages[i] == max_age) {
            cout << names[i] << endl;
        }
    }

    return 0;
}


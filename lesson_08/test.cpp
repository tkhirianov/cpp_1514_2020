/*Домашнее задание:
1) Научиться заполнять массив так:
При N = 3: 1 2 4 8
При N = 10: 1 2 4 8 16 32 64 128 256 512 1024

2) Научиться заполнять массив так:
При N = 10: 1 2 2 3 3 3 4 4 4 4
При N = 12: 1 2 2 3 3 3 4 4 4 4 5 5
*/
#include <iostream>

using namespace std;

void fill_arr1(int N)
{
    int A[N] = {};
    A[0] = 1;
    for (int i = 1; i < N; i++){
        A[i] = A[i-1]*2;
    }
    for (int i = 0; i < N; i++){
        cout << A[i] << " ";
    }
    cout << "\n";
}

void fill_arr2(int N)
{
    int finish = 0;
    int A[N] = {};
    for (int x = 1; finish < N; x++) {
        int start = finish;
        finish += x;
        if (finish >= N){
            finish = N;
        }
        for (int j = start; j < finish; j++) {
            A[j] = x;
        }
    }
    for (int i = 0; i < N; i++) {
        cout << A[i] << " ";
    }
    cout << "\n";
}

int main()
{
  int N;
  cin >> N;

  fill_arr1(N);
  fill_arr2(N);

  return 0;
}

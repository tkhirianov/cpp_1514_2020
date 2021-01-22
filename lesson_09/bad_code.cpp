#include <iostream>

using namespace std;

int main()
{
    int N1;
    int N2;
    cout << N1 << ' ' << N2 << '\n';
    int A[N1] = {};
    int B[N2] = {};
    A[5] = 775;
    A[10] = 776;
    A[15] = 777;

    for(int i = 0; i < N2; i++) {
        cout << B[i] << '\t';
    }
    cout << '\n';

    return 0;
}

#include <iostream>
#include <vector>
using namespace std;

void print_vector_int(const vector<int> &A)
{
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << '\t';
    }
    cout << '\n';
}

int main()
{
    const int N = 5;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i*1000;
    }
    print_vector_int(A);

    vector<int> B(N);
    for (int i = 0; i < N; i++) {
        B[i] = A[N - 1 - i];
    }
    print_vector_int(B);

    return 0;
}


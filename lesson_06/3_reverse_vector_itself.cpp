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
    const int N = 6;

    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        A[i] = i*1000;
    }
    print_vector_int(A);

    for (int i = 0; i < N/2; i++) {
        swap(A[i], A[N - 1 - i]);
        print_vector_int(A);
    }

    return 0;
}


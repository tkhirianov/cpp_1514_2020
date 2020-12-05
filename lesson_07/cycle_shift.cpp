#include <iostream>
#include <vector>
using namespace std;

void print_vector(vector<int> &A)
{
    std::cout << "[";
    if (A.size() > 0)
        cout << A[0];
    for (int i = 1; i < A.size(); i++) {
        cout << ", " << A[i];
    }
    std::cout <<"]\n";
}

void shift_left(vector<int> &A)
{
    int N = A.size();
    int tmp = A[0];
    for(int i = 0; i < N-1; i++) {
        A[i] = A[i+1];
    }
    A[N-1] = tmp;
}

void shift_right(vector<int> &A)
{
    int N = A.size();
    int tmp = A[N-1];
    for(int i = N-2; i >= 0; i--) {
        A[i+1] = A[i];
    }
    A[0] = tmp;
}


int main()
{
    vector<int> A;
    int N = 10;
    A.resize(N);
    for (int i = 0; i < A.size(); i++) {
        A[i] = i;
    }

    print_vector(A);
    shift_left(A);
    print_vector(A);
    shift_right(A);
    print_vector(A);

    A.push_back(10);
    print_vector(A);
    A.pop_back();
    print_vector(A);3
}





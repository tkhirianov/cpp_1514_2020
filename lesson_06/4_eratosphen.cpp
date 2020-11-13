#include <iostream>
#include <vector>
using namespace std;

void print_vector_bool(const vector<bool> &A)
{
    for (int i = 0; i < A.size(); i++) {
        cout << A[i] << '\t';
    }
    cout << '\n';
}

int main()
{
    const int N = 10000000;

    vector<bool> is_prime(N+1);
    for (int i = 0; i < N; i++) {
        is_prime[i] = true;
    }

    // Eratosphenes sieve (Решето Эратосфена)
    for (int x = 2; x*x <= N; x++) {
        if (is_prime[x])
            for (int y = x*x; y <= N; y += x)
            {
                is_prime[y] = false;
            }
    }

    // Распечатаем простые числа из решета
    /*for (int x = 2; x <= N; x++) {
        if (is_prime[x]) {
            cout << x << '\t';
        }
    }
    cout << '\n';
   */
    return 0;
}


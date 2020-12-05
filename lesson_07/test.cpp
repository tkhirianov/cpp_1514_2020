#include <iostream>
#include <vector>
using namespace std;

void input_vector(vector<int> &A)
{
  A.empty();
  int N;
  cin >> N;  // первым числом вводим сколько будет всего чисел
  A.resize(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
}

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

int main()
{
  vector<int> cakes;
  // тут вводятся количества пирожных по их видам:
  input_vector(cakes);
  print_vector(cakes);

  int length;
  int spicies;
  int max = 0;
  for(int i = 0; i < cakes.size(); i ++) {
    int c = cakes[i] * (i + 1);

    if (c > max) {
      max = c;
      length = cakes[i];
      spicies = i + 1;
    }
  }
  cout << spicies << " " << length << "\n";
}

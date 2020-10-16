#include <iostream>
using namespace std;

int main()
{
    cout << "start\n";
    int x = 1;
CYCLE:
    if (x > 3) goto EXIT;
    cout << "A" << x << "\n";
    cout << "B" << x << "\n";
    cout << "C" << x << "\n";
    x += 1;  // Итерирование - перешагивание на следующую итерацию.
    goto CYCLE;
EXIT:
    cout << "exit\n";

    return 0;
}

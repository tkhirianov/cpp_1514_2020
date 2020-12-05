#include <iostream>

using namespace std;

int main()
{
    int lucky_tickets_number = 0;
    int counter = 0;
    for(int d1 = 0; d1 < 10; d1++)
        for(int d2 = 0; d2 < 10; d2++)
            for(int d3 = 0; d3 < 10; d3++)
                for(int d4 = 0; d4 < 10; d4++)
                    for(int d5 = 0; d5 < 10; d5++)
                        for(int d6 = 0; d6 < 10; d6++)
                            for(int d7 = 0; d7 < 10; d7++)
                                for(int d8 = 0; d8 < 10; d8++)
                                    for(int d9 = 0; d9 < 10; d9++)
                                        for(int d0 = 0; d0 < 10; d0++) {
                                            counter ++;
                                            if (d1 + d2 + d3 + d4 + d5 == d6 + d7 + d8 + d9 + d0) {
                                                lucky_tickets_number += 1;
                                            }
                                        }
    cout << lucky_tickets_number << '\n';
    cout << counter << '\n';
    return 0;
}

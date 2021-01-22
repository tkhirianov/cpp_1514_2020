#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s = "Привет мир!";
    cout << s << endl;
    string name, lastname;
    getline(cin, name);
    getline(cin, lastname);
    cout << "length = " << name.length() << endl;
    cout << name + ' ' + lastname << endl;
    cout << lastname + " --- " + name << endl;

    return 0;
}

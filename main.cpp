#include <iostream>

using namespace std;

int main()
{
    bool magic_bool;
    *((char*)&magic_bool) = 2;

    if (magic_bool == true)
        cout << "magic_bool == true\n";
    if (magic_bool == false)
        cout << "magic_bool == false\n";
    if (magic_bool)
        cout << "magic_bool\n";
    if (!magic_bool)
        cout << "!magic_bool\n";
    if (magic_bool == 1)
        cout << "magic_bool == 1\n";
    if (magic_bool == 0)
        cout << "magic_bool == 0\n";
    if (magic_bool != true)
        cout << "magic_bool != true\n";
    if (magic_bool != true)
        cout << "magic_bool != true\n";
}
#include <iostream>
using namespace std;
int main()
{

    char button;
    cout << "write a character" << endl;
    cin >> button;
    switch (button)
    {
    case 'a':

        cout << "hello" << endl;

        break;
    case 'b':
        cout << "namaste" << endl;
        break;
    case 'c':
        cout << "hola" << endl;
        break;
    default:
        cout << "i am still learning" << endl;
        break;
    }
    return 0;
}
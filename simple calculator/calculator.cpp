#include <iostream>
using namespace std;
int main()
{

    float n1, n2;
    cout << "input two numbers";
    cin >> n1 >> n2;

    char op;
    cout << "input an opreator";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << n1 + n2 << endl;
        break;
    case '-':
        cout << n1 - n2 << endl;
        break;
    case '*':
        cout << n1 * n2 << endl;
        break;
    case '/':
        cout << n1 / n2 << endl;
        break;
    default:
        cout << "i am only a calculator not super computer" << endl;
        break;
    }

    return 0;
}
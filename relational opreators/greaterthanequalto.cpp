#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "input a number" << endl;
    cin >> n;

    if (n > 10)
    {
        cout << "greater than 10" << endl;
    }
    else if (n < 10)
    {
        cout << "less than 10" << endl;
    }
    else
    {
        cout << "equal to 10" << endl;
    }
    return 0;
}

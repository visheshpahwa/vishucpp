#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "iput a number" << endl;
    cin >> n;

    if (n % 2 == 0 && n % 3 == 0)
    {
        cout << "n is divisible by both 2 and 3" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "n is divisible by 2" << endl;
    }
    else if (n % 3 == 0)
    {
        cout << "n is divisible by 3" << endl;
    }
    else
    {
        cout << "n is not divisible by 2 and 3" << endl;
    }

    return 0;
}
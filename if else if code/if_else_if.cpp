#include <iostream>
using namespace std;
int main()
{
    int savings;
    cin >> savings;

    if (savings > 5000)
    {
        if (savings > 10000)
        {
            cout << "Road trip with neha\n";
        }
        else
        {
            cout << "Shoping with neha\n";
        }
    }
    else if (savings > 2000)
    {
        cout << "go with rashmi\n";
    }
    else
    {
        cout << "out with friends\n";
    }
    return 0;
}
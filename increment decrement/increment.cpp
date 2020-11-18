#include <iostream>
using namespace std;

int main()
{

    int i = 1;
    int j = 2;
    int k = 3;

    int l;

    l = ++i - --j + i++ - j++;
    cout << i << endl;
    cout << j << endl;
    cout << k << endl;
    cout << l << endl;

    return 0;
}
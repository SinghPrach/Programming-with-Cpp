#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int a;
    char ch[80];

    // Enter input from user
    cin >> a;

    // Get input from user -
    cin.getline(ch,80);

    // Prints 4
    cout << a << endl;

    // Printing string : This does not print string
    cout << ch << endl;

    return 0;
}

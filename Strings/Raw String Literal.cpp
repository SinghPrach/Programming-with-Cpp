//To demonstrate working of raw string literal
#include <iostream>
using namespace std;
int main()
{
    // A Normal string
    string string1 = "Hello.\nWorld.\nHello.\n";

    // A Raw string
    string string2 = R"(Hello.\nWorld.\nHello.\n)";

    cout << string1 << endl;

    cout << string2 << endl;

    return 0;
}

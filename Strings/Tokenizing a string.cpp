//Tokenizing a string means splitting a string with respect to some delimiter(s)
#include <bits/stdc++.h>

using namespace std;

int main()
{

    string line = "I love my India";

    // Vector of string to save tokens
    vector <string> tokens;

    // stringstream class check_line
    stringstream check_line(line);

    string intermediate;

    // Tokenizing w.r.t. space ' '
    while(getline(check_line, intermediate, ' '))
    {
        tokens.push_back(intermediate);
    }

    // Printing the token vector
    for(int i = 0; i < tokens.size(); i++)
        cout << tokens[i] << '\n';
}

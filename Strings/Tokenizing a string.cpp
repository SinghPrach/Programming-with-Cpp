//Tokenizing a string means splitting a string with respect to some delimiter(s)
//Using stringstream
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
//Using strtok()
#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "I-love-India";

    // Returns first token
    char *token = strtok(str, "-");

    // Keep printing tokens while one of the
    // delimiters present in str[].
    while (token != NULL)
    {
        printf("%s\n", token);
        token = strtok(NULL, "-");
    }

    return 0;
}
//Using strtok_r()
#include <iostream>
#include <regex>
#include <string>
#include <vector>

/**
 * @brief Tokenize the given vector
   according to the regex
 * and remove the empty tokens.
 *
 * @param str
 * @param re
 * @return std::vector<std::string>
 */
std::vector<std::string> tokenize(
                     const std::string str,
                          const std::regex re)
{
    std::sregex_token_iterator it{ str.begin(),
                             str.end(), re, -1 };
    std::vector<std::string> tokenized{ it, {} };

    // Additional check to remove empty strings
    tokenized.erase(
        std::remove_if(tokenized.begin(),
                            tokenized.end(),
                       [](std::string const& s) {
                           return s.size() == 0;
                       }),
        tokenized.end());

    return tokenized;
}


int main()
{
    const std::string str = "Break string a,spaces,and,commas";
    const std::regex re(R"([\s|,]+)");

    // Function Call
    const std::vector<std::string> tokenized =
                           tokenize(str, re);

    for (std::string token : tokenized)
        std::cout << token << std::endl;
    return 0;
}

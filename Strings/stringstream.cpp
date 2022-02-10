//clear()- To clear the stream.
//str()- To get and set string object whose content is present in the stream. 
//operator <<- Add a string to the stringstream object. 
//operator >>- Read something from the stringstream object.

//Count the number of words in a string
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

int countWords(string str)
{
    // Breaking input into word
    // using string stream

    // Used for breaking words
    stringstream s(str);

    // To store individual words
    string word;

    int count = 0;
    while (s >> word)
        count++;
    return count;
}

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline (cin, s);
    cout << " Number of words are: " << countWords(s);
    return 0;
}

//Print frequencies of individual words in a string
#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

void WordFrequency(string st)
{
    // Each word it mapped to
    // it's frequency
    map<string, int>FW;

    // Used for breaking words
    stringstream ss(st);

    // To store individual words
    string Word;

    while (ss >> Word)
        FW[Word]++;

    map<string, int>::iterator m;
    for (m = FW.begin(); m != FW.end(); m++)
        cout << m->first << "= "
             << m->second << "\n";
}

int main()
{
    string s = "Hello Hi Hello";
    WordFrequency(s);
    return 0;
}

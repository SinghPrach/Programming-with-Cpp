// Input functions: getline(), push_back() and pop_back()
#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    // Declaring string
    string str;

    cout<<"Enter a string"<<endl;
    // Taking string input using getline()
    getline(cin, str);

    // Displaying string
    cout << "The initial string entered is : ";
    cout << str << endl;

    // Inserting a character
    str.push_back('S');     //push_back() only inserts character and not string

    // Displaying string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Deleting a character
    str.pop_back();

    // Displaying string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    return 0;
}

// Capacity functions: capacity(), resize() and shrink_to_fit()
#include <iostream>
#include <string> // for string class
using namespace std;

int main()
{
    // Initializing string
    string str = "I love my country - India";

    // Displaying string
    cout << "The initial string is : ";
    cout << str << endl;

    cout << "The length of the string is :" << str.length()
         << endl;

    // Resizing string using resize()
    str.resize(13);

    // Displaying string
    cout << "The string after resize operation is : ";
    cout << str << endl;

    // Displaying capacity of string
    cout << "The capacity of string is : ";
    cout << str.capacity() << endl;

    // Displaying length of the string
    cout << "The length of the string is :" << str.length()
         << endl;

    // Decreasing the capacity of string
    // using shrink_to_fit()
    str.shrink_to_fit();

    // Displaying string
    cout << "The new capacity after shrinking is : ";
    cout << str.capacity() << endl;

    return 0;
}
//Iterator Functions: begin(), end(), rbegin(), rend()
#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    // Initializing string`
    string str = "I love my India";

    // Declaring iterator
    std::string::iterator it;

    // Declaring reverse iterator
    std::string::reverse_iterator it1;

    // Displaying string
    cout << "The string using forward iterators is : ";
    for (it = str.begin(); it != str.end(); it++)
        cout << *it;
    cout << endl;

    // Displaying reverse string
    cout << "The reverse string using reverse iterators is "
            ": ";
    for (it1 = str.rbegin(); it1 != str.rend(); it1++)
        cout << *it1;
    cout << endl;

    return 0;
}
//Manipulating Functions: copy() and swap()
#include <iostream>
#include <string> // for string class
using namespace std;
int main()
{
    // Initializing 1st string
    string str1 = "Hello World";

    // Declaring 2nd string
    string str2 = "We rock";

    // Declaring character array
    char ch[80];

    // using copy() to copy elements into char array
    str1.copy(ch, 13, 0);

    // Displaying char array
    cout << "The new copied character array is : ";
    cout << ch << endl;

    // Displaying strings before swapping
    cout << "The 1st string before swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string before swapping is : ";
    cout << str2 << endl;

    // using swap() to swap string content
    str1.swap(str2);

    // Displaying strings after swapping
    cout << "The 1st string after swapping is : ";
    cout << str1 << endl;
    cout << "The 2nd string after swapping is : ";
    cout << str2 << endl;

    return 0;
}

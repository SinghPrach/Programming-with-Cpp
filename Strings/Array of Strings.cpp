//1. Using Pointers:
#include <iostream>

int main()
{
    // Initialize array of pointer
    const char *place[4] = { "Patna", "Goa",
                             "Delhi", "Nainital" };

    for (int i = 0; i < 4; i++)    // for (int i = 0; i <= 3; i++)
        std::cout << place[i] << "\n";

    return 0;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
//2. Using 2D array
#include <iostream>

int main()
{
    // Initialize 2D array
    char colour[4][10] = { "Blue", "Red", "Orange",
                           "Yellow" };

    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";

    return 0;
}

#include <iostream>

int main()
{
    // Initialize 2D array
    char colour[4][10] = { "Blue", "Red", "Orange",
                           "Yellow"};

    // Printing Strings stored in 2D array
    for (int i = 0; i < 4; i++)             // outer loop for row
    {
        for (int j = 0; j<10; j++)   //inner loop for column
                std::cout << colour[i][j]<<"\n";
    }


    return 0;
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
//3. Using the string class:
#include <iostream>
#include <string>

int main()
{
    // Initialize String Array
    std::string colour[4] = { "Blue", "Red",
                              "Orange", "Yellow" };

    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
//4. Using the vector class:
#include <iostream>
#include <vector>
#include <string>

int main()
{
    // Declaring Vector of String type
    // Values can be added here using initializer-list syntax
    std::vector<std::string> colour {"Blue", "Red", "Orange"};

    // Strings can be added at any time with push_back
    //colour.push_back("Yellow");

    // Print Strings stored in Vector
    for (int i = 0; i < colour.size(); i++)
        std::cout << colour[i] << "\n";
}
//---------------------------------------------------------------------------------------------------------------------------------------------------------------
//5. Using the array class:
#include <iostream>
#include <array>
#include <string>
 
int main()
{
    // Initialize array
    std::array<std::string, 4> colour { "Blue", "Red", "Orange",
                                     "Yellow" };
 
    // Printing Strings stored in array
    for (int i = 0; i < 4; i++)
        std::cout << colour[i] << "\n";
 
    return 0;
}

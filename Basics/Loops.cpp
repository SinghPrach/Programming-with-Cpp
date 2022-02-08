// For loop
#include <iostream>
using namespace std;
  
int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << "Hello World\n";
    }
  
    return 0;
}

//While loop
#include <iostream>
using namespace std;
  
int main()
{
    int i = 1;

    while (i < 6)
    {
        cout << "Hello World\n";

        i++;
    }
  
    return 0;
}

//do while loop
#include <iostream>
using namespace std;
  
int main()
{
    int i = 2; // Initialization expression
  
    do
    {
        // loop body
        cout << "Hello World\n";
        i++;
  
    }  while (i < 1);   // test expression
  
    return 0;
}

//Infinite Loop
#include <iostream>
using namespace std;
int main ()
{
    int i;
  
    // This is an infinite for loop as the condition
    // expression is blank
    for ( ; ; )
    {
        cout << "This loop will run forever.\n";
    }
}

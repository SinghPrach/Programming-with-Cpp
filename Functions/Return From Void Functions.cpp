//Return in void
#include <iostream>
using namespace std;
  
void fun()
{
    cout << "Hello";
  
    return;
}

int main()
{
    fun();
    return 0;
}
//void can return another void function
#include <iostream>
using namespace std;
  
// A sample void function
void work()
{
    cout << "The void function has returned a void() !!! \n";
}

void test()
{
    // Returning void function
    return work();
}
int main()
{
    // Calling void function
    test();
    return 0;
}
//Void can return a void value
#include <iostream>
using namespace std;
  
// Driver void() returning a void value
void test()
{
    cout << "Hello";
  
    // Returning a void value
    return (void)"Doesn't Print";
}
  
// Driver Code
int main()
{
    test();
    return 0;
}

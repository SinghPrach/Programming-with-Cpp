//Example 1
#include <iostream>
using namespace std;

class SmartPointer {
    int* ptr; // Actual pointer
public:

    explicit SmartPointer(int* p = NULL) { ptr = p; }

    // Destructor
    ~SmartPointer() { delete (ptr); }

    // Overloading dereferencing operator
    int& operator*() { return *ptr; }
};

int main()
{
    SmartPointer ptr(new int());
    *ptr = 20;
    cout << *ptr;


    return 0;
}
//

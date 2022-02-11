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
//shared_ptr
#include <iostream>
using namespace std;
#include <memory>

class Rectangle {
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }
};

int main()
{

    shared_ptr<Rectangle> P1(new Rectangle(10, 5));

    cout << P1->area() << endl;

    shared_ptr<Rectangle> P2;
    P2 = P1;

    cout << P2->area() << endl;

    cout << P1->area() << endl;

    cout << P1.use_count() << endl;
    return 0;
}


//When local variable’s name is same as member’s name
#include<iostream>
using namespace std;

//local variable is same as a member's name
class Test_this
{
private:
   int x;
public:
   void setX (int x)
   {
       // The 'this' pointer is used to retrieve the object's x
       // hidden by the local variable 'x'
       this->x = x;
   }
   void print() { cout << "x = " << x << endl; }
};

int main()
{
   Test_this object;
   int x;
   cout<<"Enter any integer value= ";
   cin>>x;
   object.setX(x);
   object.print();
   return 0;
}

//To return reference to the calling object
#include<iostream>
using namespace std;

class Test_program
{
private:
int x;
int y;
public:
Test_program(int x = 0, int y = 0) { this->x = x; this->y = y; }
Test_program &setX(int a) { x = a; return *this; }
Test_program &setY(int b) { y = b; return *this; }
void print() { cout << "x = " << x << " y = " << y << endl; }
};

int main()
{
Test_program obj1(5, 5);

obj1.setX(10).setY(20);

obj1.print();
return 0;
}

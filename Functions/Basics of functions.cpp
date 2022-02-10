//Function for finding maximum between 2 numbers
#include <iostream>
using namespace std;

int maximum(int x, int y)
{
    if (x > y)
    return x;
    else
    return y;
}

int main() {
    int a,b,m;
    cout<<"Enter first number= ";
    cin>>a;
    cout<<"Enter second number= ";
    cin>>b;

    m = maximum(a, b);

    cout << "Maximum is " << m;
    return 0;
}

-------------------------------------------
  #include <iostream>
using namespace std;
  
void fun(int *ptr)
{
    *ptr = 30;
}
  
int main() {
    int x = 20;
    fun(&x);
    cout << "x = " << x;
      
    return 0;
}
----------------------------------------
#include <iostream>
using namespace std;
  
void fun(int x) {
    x = 30;
}
  
int main() {
    int x = 20;
    fun(x);
    cout << "x = " << x;
    return 0;
}

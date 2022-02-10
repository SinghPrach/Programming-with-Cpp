// Example 1
#include<iostream>
using namespace std;

int main()
{
  int x = 20;

  // The variable ref is a reference to x.
  int& ref = x;

  // Value of x is now changed to 30
  ref = 30;
  cout << "x = " << x << endl ;

  // Value of x is now changed to 5
  x = 5;
  cout << "ref = " << ref << endl ;

  return 0;
}

//Modify the passed parameters in a function
#include<iostream>
using namespace std;

//swapping function
void swap (int& first, int& second)
{
    int temp = first;
    first = second;
    second = temp;
}

int main()
{
    int a = 2, b = 3;
    cout<<"Before swaping, values of a and b are "<<a<<" and "<<b<<" respectively."<<endl;
    swap( a, b );
    cout << "Before swaping, a = "<<a << " and "<<"b= "<< b;
    return 0;
}
//In for loop
#include <bits/stdc++.h> 
using namespace std; 
  
int main() 
{ 
    vector<int> vect{ 10, 20, 30, 40 }; 
  
    // We can modify elements if we use reference
    for (int &x : vect) 
        x = x + 5;
  
    // Printing elements
    for (int x : vect) 
       cout << x << " "; 
  
    return 0; 
} 

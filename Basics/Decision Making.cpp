//if 
#include<iostream>
using namespace std;
 
    int main()
    {
        int i = 10;
  
        if (i > 15)
        {
           cout<<"10 is less than 15";
        }   
        
        cout<<"Outside of If";
    }

//if-else
#include<iostream>
using namespace std;
 
int main()
 {
        int i = 20;
  
        if (i < 15)
            cout<<"i is smaller than 15";
        else
            cout<<"i is greater than 15";
             
    return 0;   
 }
//if else ladder
#include<iostream>
using namespace std;
 
int main()
{
    int i = 20;
  
    if (i == 10)
        cout<<"i is 10";
    else if (i == 15)
        cout<<"i is 15";
    else if (i == 20)
        cout<<"i is 20";
    else
        cout<<"i is not present";
}

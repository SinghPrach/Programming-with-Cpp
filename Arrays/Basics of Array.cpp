// Create a 1-D array
#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    arr[0] = 5;
    arr[2] = -10;

    // this is same as arr[1] = 2
    arr[3 / 2] = 2;
    arr[3] = arr[0];

    cout << arr[0] << " " << arr[1] << " " << arr[2] << " "
         << arr[3]<< " " <<arr[4]<< " " <<arr[5];

    return 0;
}

//Traversing through array
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[6]={11,12,13,14,15,16};
    // Way 1
    for(int i=0;i<6;i++)
        cout<<arr[i]<<" ";

  cout<<endl;

    return 0;
}

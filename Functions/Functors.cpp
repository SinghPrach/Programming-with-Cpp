#include <bits/stdc++.h>
using namespace std;

// A Functor
class increment
{
private:
    int num;
public:
    increment(int n) : num(n) {  }
    int operator () (int arr_num) const {
        return num + arr_num;
    }
};

int main()
{
    int arr[] = {22, 2, 3, 4, 52};
    int n = sizeof(arr)/sizeof(arr[0]);
    int to_add = 5;

    transform(arr, arr+n, arr, increment(to_add));

    for (int i=0; i<n; i++)
        cout << arr[i] << " ";
}

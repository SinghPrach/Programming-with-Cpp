//2-dimensional
#include<iostream>
using namespace std;

int main()
{
    // an array with 2 rows and 3 columns.
    int x[2][3] = {{0,1,2}, {2,3,4}};

    // output each array element's value
    for (int i = 0; i < 2; i++) //row
    {
        for (int j = 0; j < 3; j++) //column
        {
            cout << "x[" << i
                 << "][" << j << "]: ";
            cout << x[i][j]<<endl;
        }
    }

    return 0;
}
//3-dimensional
#include<iostream>
using namespace std;

int main()
{
    // initializing the 3-dimensional array
    int x[2][3][2] =
    {
        { {0,1}, {2,3}, {4,5} },
        { {6,7}, {8,9}, {10,11} }
    };

    // output each element's value
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 2; ++k)
            {
                cout << "x[" << i << "][" << j
                     << "][" << k << "] = " << x[i][j][k]
                     << endl;
            }
        }
    }
    return 0;
}

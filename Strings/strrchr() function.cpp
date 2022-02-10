#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char str[] = "This is a string";
  char * ch = strrchr(str,'a');     //a is the character for which we need position
  cout << ch - str + 1;
  return 0;
}

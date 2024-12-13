#include <iostream>

using namespace std;

int main()
{
  int a,b,t ;
  cout <<" enter a number:" ;
  cin>> a ;
  cout << "enter a number:" ;
  cin >> b ;
  while (b!=0)
{
    t=b;
    b=a%b;
    a=t;
}
   cout <<t ;
    return 0;
}

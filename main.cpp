#include <iostream>

using namespace std;

int main()
{
    int a,b, ma ,kmm ;
    cout << "enter a number:" ;
    cin >> a ;
    cout <<"enter a number:" ;
    cin>> b ;

    if(a<b)
    {ma = b;}
      else
        {ma=a;}

    while(true)
{
    if (ma%a==0&&ma%b==0)
    {
      kmm= ma;
      break; }
     else
         ma++;

}
    cout <<kmm;
    return 0;
}

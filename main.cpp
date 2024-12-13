#include <iostream>

using namespace std;

int main()
{
    int x,y,sum,r ;

    cout << "enter a number:";
    cin>> x;
    sum=0;
    y=x;
    while (x>0)
    {
        r=x%10;
        x=x/10;
        sum =sum*10+r;
    }
    cout << sum;
    return 0;
}

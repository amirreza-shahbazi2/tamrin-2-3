#include <iostream>

using namespace std;

int main()
{
float a,b,c,gam,zarb,taghsim,tagrigh,khroog ;
while (a<=4)
{cout<< "gam=1  tagrigh=2  zarb=3 taghsim=4 khroog=5  ";
  cin >>a ;
  if (a==5)
    break ;
  else
  cout << "number:" ;
  cin >> b ;
  cout << "number:" ;
  cin >> c ;
  if (a==1 )
   { gam =b+c ;
    cout <<gam<<"\n" ; }
  else if (a==2)
   { tagrigh=b-c ;
    cout << tagrigh <<"\n"; }
  else if (a==3)
  { zarb=b*c ;
    cout << zarb <<"\n"; }
  else
  { taghsim=b/c ;
    cout<< taghsim<<"\n"; }
}
return 0 ;

}

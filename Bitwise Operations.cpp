//Arya Dhole
//ENTC-A2
//22070123027
#include <iostream>
using namespace std;
int main()
{
 float num1 = 10;
 float num2 = 5;
 int num3 = 7;
 int num4 = 9;

 cout<< "A+B = "<<num1+num2 << endl ;
 cout<< "A-B = "<<num1-num2 << endl ;
 cout<< "A*B = "<<num1*num2 << endl ;
 cout<< "A/B = "<<num1/num2 << endl ;

 cout<< "\n" << endl ;

 cout<< "A+=B is "<<(num1+=num2) << endl ;
 cout<< "A-=B is "<<(num1-=num2) << endl ;
 cout<< "A*=B is "<<(num1*=num2) << endl ;
 cout<< "A/=B is "<<(num1/=num2) << endl ;

 cout<< "\n" << endl ;

  if (num1>num2)
  {
     cout<< "A is greater than B "<<endl ;
  }
  else
  {
    cout<< "B is greater than A "<<endl ;
  }

 cout<< "A AND B is "<<(num3&&num4) << endl ;
 cout<< "A OR B is "<<(num3||num4) << endl ;
 cout<< "Negation of A is "<<(!num3) << endl ;

 cout<< "\n" << endl ;

 cout<< "Bitwise AND  operation of A and B is "<<(num3&num4) << endl ;
 cout<< "Bitwise OR  operation of A and B is "<<(num3|num4) << endl ;
 cout<< "Bitwise XOR  operation of A and B is "<<(num3^num4) << endl ;
 cout<< "Bitwise complement of A is "<<(~num3) << endl ;
 cout<< "Bitwise complement of B is "<<(~num4) << endl ;

 return 0;
}

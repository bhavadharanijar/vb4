#include <iostream>
using namespace std;
int main()
{
  int oNum,n,r,digit,s= 0;
  cout <<"Enter a positive  integer: "<<endl;
  cin >>oNum;
  n=oNum;
  while(n!= 0)
  {
      digit=n%10;
      s+=digit*digit*digit;
      n/=10;
  }
  if(s==oNum)
  cout <<oNum <<"is an Armstrong number.";
  else
  cout <<oNum <<"is not an Armstrong number.";
  return 0;
}

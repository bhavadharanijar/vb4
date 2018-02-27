#include <iostream>
using namespace std;
int main()
{
  int n1,n2,i,n,b,v;
  cout<<"Enter first number: ";
  cin>>n1;
  cout<<"Enter second number: ";
  cin>>n2;
  cout<<"Armstrong numbers between"<<n1<<"and"<<n2<<"are:"<<endl;
  for(i=n1;i<=n2;i++)
{
  v=0;
  n=i;
  for(;n>0;n/=10)
{
  b=n%10;
  v=v+b*b*b;
 }
  if(v==i)
  {
  cout <<i<<endl;
  }
  }
  return 0;
}

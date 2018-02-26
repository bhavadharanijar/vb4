#include <iostream>
using namespace std;
int main()
{
 int v;
 int b;
cout<<"enter num"<<endl;
cin>>v;
cout<<"enter num"<<endl;
cin>>b;
while(v<b)
{
 if(v%2==0)
 {
 cout<<"even no="<<v<<endl;
  }
 v=v+1;
}
return 0;
}

#include<iostream>
using namespace std;
int main()
{
int n,i;
int a[40];
cout<<"\nEnter the no of elements:";
cin>>n;
cout<<"\nenter the array elements";
for (i=0;i<=n;i++)
{
    cin>>a[i];
}
for(i=0;i<n;i++)
{
   cout<<"\n"<<i<<"\t"<<a[i]<<endl;
   }
   return 0;
}

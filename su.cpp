#include<iostream>
using namespace std;
int sum1(int v, int k);
int main()
{
    int a,b;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter a number: ";
    cin>>b;
    sum1(a,b);
    cout<<'n';
    system("pause");
    return 0;
}
int sum1(int v,int k)
{
    int sum;
    for(v=0;v<=k;v++)
    sum=v*v+k*k;
    cout<<"Output:"<<sum<<endl;
    return sum;
  
}

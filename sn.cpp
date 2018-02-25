#include<iostream>
 using namespace std;
 int main()
{
    int i,n,sum=0;
    cout<<"Enter your numbers"<<endl;
    cin>>n;
 for(i=1;i<=n;++i)
    {
        sum+=i;
    }
    cout<<"sum of your number is="<<sum;
    return 0;
}

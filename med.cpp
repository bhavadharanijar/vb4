#include<iostream>
using namespace std;

int main()

{

    int mid,a[40],n;
    double  med;

     
cout<<"\nEnter no of elements";
cin>>n;
cout<<"\nEnter your array elements";
for(int i=0;i<=n;i++)
{

cin>>a[i];
}
mid = n / 2.0;
if (n % 2!=0)

    {

        med = (a[mid] + a[mid + 1]) / 2.0;

        cout << "\nThe median is: " << med<< endl;

    }

    else

    {

        med = a[mid];

 
                                                        
        cout << "The median is: " << med<< endl;

    }

    return med;

}

#include<iostream>
using namespace std;

int main()

{

    int mid,a[40],n;
    double  median;

     
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

        median = (a[mid] + a[mid + 1]) / 2.0;

        cout << "\nThe median is: " << median<< endl;

    }

    else

    {

        median = a[mid];

 
                                                        
        cout << "The median is: " << median << endl;

    }

    return median;

}

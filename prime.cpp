include <iostream>
using namespace std;
int main()
{
   int num,i,c=0;
 cout << "Enter any number:"; 
cin>>num;
    for (i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
           c++;
        }
    }
    if (c == 2)
    {
       cout << "num is a Prime number" << endl;
    }
    else
    {
         cout << "num is not a Prime number" << endl; 
    }
    return 0;    
}

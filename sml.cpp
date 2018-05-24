#include <iostream>
using namespace std;

int main() {
	int a[67], n,sml,i;

  
	cout<<"\nenter the element you want to enter";
	cin>>n;
		for (i=0;i<n;i++){
		    sml=a[0];
	cout<<"\nenter  elements"<<i+1<<endl;
	cin>>a[i];
		}	
  
  
for (i=0;i<n;i++)
	{

	   if(sml>a[i])
	    sml=a[i];    
	   }
	cout<<"smallest array is"<<sml;
	return 0;
}

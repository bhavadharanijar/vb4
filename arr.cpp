#include <iostream>
using namespace std;

int main() {
	int a[67], n,lar,i;

  
	cout<<"\nenter the element you want to enter";
	cin>>n;
		for (i=0;i<n;i++){
		    lar=a[0];
	cout<<"\nenter  elements"<<i+1<<endl;
	cin>>a[i];
		}	
  
  
for (i=0;i<n;i++)
	{

	   if(lar<a[i])
	    lar=a[i];    
	   }
	cout<<"largest array is"<<lar;
	return 0;
}

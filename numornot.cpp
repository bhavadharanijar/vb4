#include <iostream>
using namespace std;
int isNumerStr(char *num)
{
    int i=0;
    while (*(num+i)) 
{
    if (*(num+i) >= '0' && *(num+i) <= '9')
     i++;
     else
     return 0;
    }
    return 1;
}

int main()
{
	int re= 0;
	cout<<"enter your string"<<endl;
  cin>>str>>endl;
  cout<<"enter your string"<<endl;
  cin>>str1>>endl;
  re=isNumerStr(str);
	if(re)
                 cout<<"It is numeric string"<<endl;
	else
	cout<<"It is not numeric string"<<endl;
	re=isNumerStr(str1);
	if(re)
		cout<<"It is numeric string"<<endl;
	else
		cout<<"It is not numeric string"<<endl;	
	return 0;
}

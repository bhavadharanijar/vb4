#include <iostream>
using namespace std;

int main() {
	
	char str;
	cout<<"enter your string";
	cin>>str;
	if(((str>='a')&&(str<='z'))||((str>='A')&&(str<='Z')))
	cout<<"\nstring is not numeric";
	else
	cout<<"\nnumeric";
	return 0;
}

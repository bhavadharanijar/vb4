#include<iostream>
#include<string>
using namespace std;
fun ArePair(char opening,char closing)
{
	if(open == '(' && close == ')') 
  return true;
	else if(open== '{' && close== '}') 
  return true;
	else if(open == '[' && close == ']')
  return true;
	else
  return false;
}
fun AreParanBalanced(string exp)
{
	stack<char>  S;
	for(int i =0;i<exp.length();i++)
	{
		if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
			S.push(exp[i]);
		else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
		{
			if(S.empty() || !ArePair(S.top(),exp[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty();
}

int main()
{
	
	string exp;
	cout<<"Enter an expression:  "; 
	cin>>exp;
	if(AreParanBalanced(expression))
		cout<<" parenthesis Balanced\n";
	else
		cout<<"Not Balanced\n";
}

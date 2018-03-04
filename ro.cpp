#include<iostream>
using namespace std;
int val(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    if (r == 'L')
        return 50;
    if (r == 'C')
        return 100;
    if (r == 'D')
        return 500;
    if (r == 'M')
        return 1000;
 
    return -1;
}
 int romToDeci(string &str)
{
    int res = 0;
    for (int i=0; i<str.length(); i++)
    {
        	
        int s1 =val(str[i]);
 
        if (i+1<strlength())
        {
            
            int s2 = val(str[i+1]);
 
            if (s1 >= s2)
            {
            res = res + s1;
            }
            else
            {
                res = res + s2 - s1;
                i++; 
            }
        }
        else
        {
            res = res + s1;
            i++;
        }
    }
    return res;
}
 
int main()
{
    string str ="MCM";
    cout << "Integer form of Roman Numeric val is "
         << romToDeci(str)<<endl;
 
    return 0;
}

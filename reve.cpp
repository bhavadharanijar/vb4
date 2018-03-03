#include <iostream>
using namespace std;
int main()
{
        string s;
        int beg,end,i,j=0,len,tmp,cnt=0;
 
        cout<<"ENTER STRING: ";
        getline(cin,s);
        len=s.length();
       for(i=0;i<(len/2);i++)
        {
                tmp=s[i];
                s[i]=s[len-1-i];
                s[len-1-i]=tmp;
        }
      for(i=0;i<len;i++)
        {
                 if(s[i]==' ' || s[i]=='\0')
                {
                         for(beg=j,end=i-1 ; beg<(i+j)/2 ; beg++,end--)
                         {
                                   tmp=s[beg];
                                   s[beg]=s[end];
                                   s[end]=tmp;
                         }
                         j=i+1;
                }
         }
 
       cout<<s<<" ";
 
       return 0;
}

#include <stdio.h>
int match(char[],char[]);
int main()
{
 char a1[100],b[100];
 int pos;
 printf("Enter text\n");
 gets(a1);
 printf("Enter a string \n");
 gets(b);
 pos=match(a,b);
 if(pos!=-1)
 {
 printf("Found location%d\n",pos+1);
 }
 else{
 printf("Not found\n");
 }
 return 0;
 }
 
 int match(char text[],char pattern[])
 {
 int c,d,e,text_length,pattern_length,pos=-1;
 text_length=strlen(text);
 pattern_length=strlen(pattern);
 if (pattern_lengt>text_length)
 {
 return -1;
 }
 for (c=0;c<=text_length-pattern_length;c++)
 {
 pos=e=c;
 for(d=0;d<pattern_length;d++)
 {
 if(pattern[d]==text[e])
 {
 e++;
 }
 else{
 break;
 }
 }
 if(d==pattern_length) 
 {
 return pos;
 }
 }
 return -1;
 }

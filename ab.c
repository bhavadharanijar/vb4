#include <stdio.h>
void main()
{
    int number,i,j,a[10],n=0,temp=0,k;
    scanf("%d",&number);
    scanf("%d",&k);
    while(number!=0)
    {
        a[n++]=number%10;
        number=number/10;
    }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
          { if(a[i]>a[j]){
               temp=a[i];
               a[i]=a[j];
               a[j]=temp;}
           }
           temp=0;
    for(i=0;i<n-k;i++)
     temp=temp*10+a[i];
    printf(" %d ",temp);

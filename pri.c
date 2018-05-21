#include<stdio.h>
int main()
{
    int lo,hi,i,flag,count=0;;
    scanf("%d",&lo);
    scanf("%d",&hi);
    while(lo<hi)
    {
        flag=0;
        for(i=2;i<lo/2;i++)
        {
            if(lo%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
           // printf("%d ",lo);
            count++;
        }
        lo++;
        
    }
    printf("%d",count);
return();
}

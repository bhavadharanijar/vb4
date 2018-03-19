#include <stdio.h>
int main()
{
    int a[100], fre[100];
    int size, i, j, count;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
        fre[i] = -1;
    }


    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            if(a[i]==a[j])
            {
                count++;
                fre[j] = 0;
            }
        }
        if(fre[i] != 0)
        {
            fre[i] = count;
        }
    }
   for(i=0;i<size;i++)
   {
   if(fre[i]==1)
    printf("%d",a[i]);
   }
}

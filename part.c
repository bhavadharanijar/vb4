#include<stdio.h>
 
void printarr(int p[], int n)
 
 {

 int s;

for ( s = 0; s < n; s++)

printf("%d ", p[s]);

printf("\n");

}

void partition(int n)

{

int p[n]; 
        
int v = 0;  
        
p[v] = n; 
        
int rem_val;
        
while (1)
        
{
        
printarr(p, v+1);
        
rem_val = 0;

while (v>= 0 && p[v] == 1)

{

rem_val += p[v];

 z--;

 }

 if (v< 0)  
return;
 
p[v]--;

 rem_val++;

 while (rem_val > p[v])

{
p[v+1] = p[v];
rem_val = rem_val - p[v];
 v++;

}

p[v+1] = rem_val;
v++;
 
}
 
}
int main()
 
{

int num;

printf("\nEnter a number to perform integer partition: ");

scanf("%d", &num);
partition(num);

return 0;
}

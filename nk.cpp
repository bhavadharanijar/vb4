#include<iostream>
using namespace std;
 int findSum(int N, int K)
{
    int sum= 0;
 for (int i=1; i <= N;i++)
 {       
 sum+= (i+K);
 }
    return sum;
}
 
int main()
{
    int N = 10, K = 2;
    cout << findSum(N, K)<<endl;
    return 0;
}

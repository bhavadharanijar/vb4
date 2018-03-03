#include <iostream>
using namespace std;
unsigned cntOfMultiples(unsigned n)
{
  
   return (n/3+n/5-n/15);
}
 
int main()
{
   cout << cntOfMultiples(6) << endl;
   cout << cntOfMultiples(16) << endl;
   return 0;
}

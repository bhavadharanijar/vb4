#include <iostream>
#include <string>
int main ()
{
  std::string str;
  std::string str2="Writing ";
  std::string str3="reading";
  str.append(str2);                       
  str.append(str3,6,3);                   
  str.append("this is string",5);          
  str.append("operation");                   
  str.append(10u,'.');                    
  str.append(str3.begin()+8,str3.end()); 
str.append<int>(5,0x2E);               
std::cout << str <<endl;
  return 0;
}

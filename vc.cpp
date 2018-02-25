#include <iostream>
 using namespace std;
 int main() 
{
    char chr;
    cout <<"Enter a Character\n";
    cin >>chr;
    if(chr=='a'||chr=='e'|| chr=='i'||chr=='o'||chr=='u'||chr=='A'||chr=='E'||chr=='I'||chr=='O'||chr=='U')
{
        cout<<chr<<"is VOWEL";
}
 else
 {
        cout<<chr<<"is CONSONANT";
 }
     
    return 0;
}

#include <iostream>
int main()
{
   char day;
   cout<<"Enter day(monday,tuesday,wednesday,thursday,friday,saturday,sunday):"<<endl;
   cin>>day;
    switch(day)
    {
        case monday: 
            cout<<"working day";
            break;
        case tuesday: 
            cout<<"working day";
            break;
        case wednesday: 
            cout<<"working day";
            break;
        case thursday: 
            cout<<"working day";
            break;
        case friday: 
            cout<<"working day";
            break;
        case saturday: 
            cout<<"holiday";
            break;
        case sunday: 
           cout<<"holiday";
            break;
        default: 
            cout<<"Invalid input!"<<endl;
    }
return 0;
}

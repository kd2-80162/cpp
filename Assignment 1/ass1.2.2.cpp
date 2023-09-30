#include<iostream>
using namespace std;
class Date
{
private:
int dd;
int mm;
int yy;

public :
void initDate()
{
    this->dd=0;
    this->mm=0;
    this->yy=0;
}
void acceptDateFromConsole()
{
cout<<"Enter The Day";
cin>>this->dd;
cout<<"Enter The Month";
cin>>this->mm;
cout<<"Enter The year";
cin>>this->yy;

}
void printDateOnConsole()
{
 cout<<"date is"<<this->dd<<"/"<<this->mm<<"/"<<this->yy<<"/"<<endl;

}

bool isleapyear()
 {   if((this->yy%4==0 && this->yy%100!=0)||(this->yy%4==0 && this->yy%400!=0))
    return true ;
    else 
    return false;
    }
    
};


int  main()
{
int choice;
Date D1;

do
{
   cout<<"1.Initialize Date\n2.Print date\n3.Accept date\n4.if this is leap year\n0.Exit\n";
   cout<<"enter your choice:\n";
   cin>>choice;

   switch (choice)
   {
   case  1:
        D1.initDate();
    break;
   case 2:
         D1.acceptDateFromConsole();
         break;;

   case 3:
         D1.printDateOnConsole
         
         ();
         break;
   case 4:
         if (D1.isleapyear())
         printf("this is a leap year");


         else
         printf("this is not a leap year" );
        
  ;
   }

} while (choice!=0);

return 0;
}
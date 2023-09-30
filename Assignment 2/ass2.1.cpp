/* Q1. Create a namespace NStudent. Create the Student class(created as per assignment-1 Q3) inside
namespace. Test the functionalities.*/

#include<iostream>
#include<string>
using namespace std;
namespace Nstudent
{
    class Student
    {
        private:

        int roll;
        string name;
        int marks;
        
        public:

        void initStudent()
        {
            this->roll=0;
            this->name="";
            this->marks=0;
        }
        void acceptStudentOnConsole()
        {
            cout<<"The Roll No of Student:";
            cin>>this->roll;
            cout<<"The Name Of Student:";
            cin.ignore();
            getline(cin,name);
            cin>>this->name;
            cout<<"The Marks of Student:";
            cin>>this->marks;
         }
         
         void printStudentFromConsole()
         {
            cout<<"The Roll No"<<this->roll;
            cout<<"The Name of Student"<<this->name;
            cout<<"The Marks Of Student"<<this->marks;
         }


    };
}
int main()
{  int choice;
   Nstudent::Student s1;

do
{
    cout<<"\n The Information Of Student \n"<<endl;
    cout<<"\n1.Intialize Student Information"<<endl;
    cout<<"\n2.Accept Student Information"<<endl;
    cout<<"\n3.Print Student Information"<<endl;
    cout<<"\n4.0 exit"<<endl;
    cout<<"Enter Your choice (1-4)";
    cin>>choice;
   

   switch (choice)
   {
   case 1: s1.initStudent();
           s1.printStudentFromConsole();
           break;
    case 2: s1.acceptStudentOnConsole();
        break;
    case 3: s1.printStudentFromConsole();
    
   }
   



} while (choice!=0);


    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class student
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
    cout<<"The roll no of student";
    cin>>this->roll;
    cout<<"The Name of student";
    cin.ignore();
    getline(cin,name);
    cin>>this->name;
    cout<<"The marks of the stuent";
    cin>>this->marks;

}
void printStudentFromConsole()
{

cout<<"The roll no of Student"<<this->roll<<"The name of Student"<<this->name<<"The marks of student"<<this->marks<<endl;


}
};
int main()
{ student s1;
    int choice;

    do
    {
     cout<<"\n The menu Driven Programm for Student\n"<<endl;
     cout<<"\n1.Initialize Student Information\n"<<endl;
     cout<<"\n2.Accept Student Information\n"<<endl;
     cout<<"\n3.Print Student Information\n"<<endl;
     cout<<"\n4.Enter Your Choice(1-3)\n";
     cin>>choice;

    switch (choice)
    {
    case 1:
        s1.initStudent();
        break;
    case 2:
         s1.acceptStudentOnConsole();
         break;
    case 3:
         s1.printStudentFromConsole();
         break;

   
    }
    }
     while (choice!=0);
     
    return 0;

}
#include<iostream>
using namespace std;
class box
{
 float length;
 float width;
 float height;
public:
box()
{
 this->length=0;
 this->height=0;
 this->width=0;

}
box(float length,float width,float height)
{
this->height=height;
this->length=length;
this->width=width;
}
void acceptBox()
{
    cout<<"The Length Of box is:";
    cin>>length;
    cout<<"The width of the box is:";
    cin>>width;
    cout<<"The height of the box is:";
    cin>>height;

}
void displayBox()
{
    cout<<"The length of box:"<<this->length;

    cout<<"The width of Box:"<<this->width;

    cout <<"The height of Box:"<<this->height;

}
void calvolume()
{
    int volume;
    volume =this->length * this->width * this->height;
    cout<<"the Volume is"<<volume<<endl;

}
};

int menu()
{
    int choice;
    cout<<"0.Exit \n 1.Add_box \n 2.Display Box\n3.Calculate Volume"<<endl;
    cin>>choice;
    return choice;
}

enum boxMenu
{
    Exit,
    Add_box,
    DisplayBox,
    Cal_Volume
};

int main()
{
  box b1;
   
 int choice;
 while ((choice=menu())!=0)
 {
    switch (choice)
    {
    case 1:Add_box:
        b1.acceptBox();
        break;

    case 2:DisplayBox:

          b1.displayBox();

        break;

    case 3: calvolume:
    
         b1.displayBox();
         b1.calvolume();

    
    default:
        break;
    }
 }
 

return 0;

}


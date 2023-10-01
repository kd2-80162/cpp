/* Q2. Imagine a tollbooth at a bridge. Cars passing by the booth are expected to pay a fifty-cent toll.
Mostly they do, but sometimes a car goes by without paying.
The tollbooth keeps track of the number of cars that have gone by and of the total amount of money
collected. Model this tollbooth with a class called tollbooth.
The two data items are a type unsigned int to hold the total number of cars, and a type double to
hold the total amount of money collected.
A constructor initializes all data members to 0. A member function called payingCar() increments
the car total and adds 0.50 to the cash total. An other function, called nopayCar()
increments the car total but adds nothing to the cash total. Finally, a member function called
printOnConsole() displays the two totals and number of paying as well as non paying cars total.

( write a menu driven code for it) */

#include <iostream>
using namespace std;
class tollbooth
{
private:
    unsigned int totalnoOfcars;
    double totalamountOfmoney;

public:
    tollbooth()
    {
        this->totalamountOfmoney = 0;
        this->totalnoOfcars = 0;
    }

    void payingCar()
    {
        this->totalnoOfcars += 1;
        this->totalamountOfmoney += 0.50;
        cout << "Car paid toll successfully";
    }
    void noPayingcar()
    {
        this->totalnoOfcars += 1;
        cout << "Car not paid Toll";
    }

    void printOnConsole()
    {
    cout<<"Total no. of Paying cars:"<<((this->totalamountOfmoney/0.50));
    cout<<"Tptal no. of Non paying cars:"<<((this->totalnoOfcars)-((totalamountOfmoney)/0.50));
    cout<<"Total money Collected"<<this->totalamountOfmoney;
    }
};
enum tollmenu
{
    EXIT,
    ADD_PAYINGCARS,
    ADD_NONPAYINGCARS,
    SHOW_ALL_CARS,

};
int menu()
{
    int choice;
    cout << "\n*********************MENU******************\n";
    cout << "0.EXIT\n 1.Add_paying_Car \n 2.Add_Non_Payingcar \n 3.Display Cars" << endl;
    cin >> choice;
    return choice;
}
int main()
{
    tollbooth t1;

    int choice;

    while ((choice = menu() != 0))
    {
        switch (choice)
        {
        case 1:
            t1.payingCar();
            break;

        case 2:
            t1.noPayingcar();
            break;

        case3:
            t1.printOnConsole();
            break;
        }
    }
    return 0;
}
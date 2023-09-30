#include <iostream>
#include <string>
using namespace std;

class Address
{
private:
    string building;
    string street;
    string city;
    int pin;

public:
    Address()
    {
        this->building = "";
        this->street = "";
        this->city = "";
        this->pin = 0;
    }

    Address(string building, string street, string city, int pin)
    {
        this->building = building;
        this->street = street;
        this->city = city;
        this->pin = pin;
    }
    void accept()
    {
        cout << "Building Name:";
        getline(cin, building);
        cout << "Street Name:";
        getline(cin, street);
        cout << "city Name:";
        getline(cin, city);
        cout << "pin number:";
        cin >> pin;
    }
    void display()
    {
        cout << "Building Name:\n"
             << this->building;
        cout << "street Name:\n"
             << this->street;
        cout << "City Name:\n"
             << this->city;
        cout << "PIN number:\n"
             << this->pin;
    }

    string get_building()
    {
        return this->building;
    }

    string get_street()
    {
        return this->street;
    }

    string get_city()
    {
        return this->city;
    }
    int get_pin()
    {
        return this->pin;
    }

    void set_building()
    {
        cout << "Enter Building Name";
        cin >> this->building;
    }

    void set_street()
    {
        cout << "Enter Street";
        cin >> this->street;
    }

    void set_city()
    {
        cout << "Enter city";
        cin >> this->city;
    }
    void set_pin()
    {
        cout << "Enter pin";
        cin >> this->pin;
    }
};

int main()
{
    Address a1;
    a1.accept();
    a1.display();

    // GETTING OUTPUT FROM GETTERS

    cout << "Building Name:" << a1.get_building() << endl;
    cout << "City Name:" << a1.get_city() << endl;
    cout << "Enter Pin:" << a1.get_pin() << endl;
    cout << "Enter Street :" << a1.get_street() << endl;

    // GETTING OUTPUT FROM SETTERS

    a1.set_building();
    a1.set_city();
    a1.set_pin();
    a1.set_street();

    return 0;
}
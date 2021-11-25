#include <iostream>
using namespace std;
//this is global enum variable
enum employee_type
{
    laborer,
    secretary,
    manager,
    accountant,
    executive,
    researcher
};
//THis is date class
class Date
{
private:
    int month;
    int day;
    int year;
    char temp;

public:
    void get_date()
    {
        cout << "Enter date in this format month/date/year = ";
        cin >> month >> temp >> day >> temp >> year;
    }
    void display()
    {
        cout << "Given date is =  " << month << "/" << day << "/" << year << endl;
    }
};
//This is employee class
class Employee
{
private:
    int employee_number;
    float employee_compensation;
    Date date_1;
    employee_type emp;

public:
    void get_data();
    void display();
};
void Employee ::get_data()
{
    char type;
    cout << "Enter employee number = ";
    cin >> employee_number;
    cout << "Enter employee compensation = ";
    cin >> employee_compensation;
    date_1.get_date();
    cout << "Enter employee type (first letter only laborer, secretary, manager, accountant, executive, researcher): ";
    cin >> type;
    switch (type)
    {
    case 'l':
        emp = laborer;
        break;
    case 's':
    emp:
        secretary;
        break;
    case 'm':
        emp = manager;
        break;
    case 'a':
        emp = accountant;
        break;
    case 'e':
        emp = executive;
        break;
    case 'r':
        emp = researcher;
        break;
    default:
        break;
    }
}
void Employee::display()
{
    cout << "This is employee number = " << employee_number << endl;
    cout << "This is employee compensation = " << employee_compensation << endl;
    date_1.display();
    cout << endl;
    switch (emp)
    {
    case laborer:
        cout << "Employee type is laborer";
        break;
    case secretary:
        cout << "Employee type is secretary";
        break;
    case manager:
        cout << "Employee type is manager";
        break;
    case accountant:
        cout << "Employee type is accountant";
        break;
    case executive:
        cout << "Employee type is executive";
        break;
    case researcher:
        cout << "Employee type is researcher";
        break;
    default:
        cout << "Invalid input";
        break;
    }
    cout << endl;
}
int main()
{
    Employee user_1, user_2, user_3;

    cout << "Enter detail for employee 1 ";
    user_1.get_data();
    cout << endl;
    cout << "Enter detail for employee 2 ";
    user_2.get_data();
    cout << endl;
    cout << "Enter detail for employee 3 ";
    cout << endl;
    user_3.get_data();
    cout << endl;
    cout << "Employee first data ";
    user_1.display();
    cout << endl;
    cout << "Employee second data";
    user_2.display();
    cout << endl;
    cout << "Employee third data";
    user_3.display();
    cout << endl;
}
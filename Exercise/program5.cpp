#include <iostream>
using namespace std;
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
        if (month > 31 || month < 1)
        {
            cout << "Enter right choice" << endl;
        }
        else if (year < 1 || year > 12)
        {
            cout << "Enter right choice" << endl;
        }
        cout << "Enter date in this format month/date/year = ";
        cin >> month >> temp >> day >> temp >> year;
    }
    void display()
    {
        cout << "Given date is =  " << month << "/" << day << "/" << year << endl;
    }
};
int main()
{
    Date user_1;
    user_1.get_date();
    user_1.display();
    return 0;
}
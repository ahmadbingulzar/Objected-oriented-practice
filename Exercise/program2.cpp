#include <iostream>
using namespace std;
class toolBooth
{
private:
    unsigned int total_cars;
    double total_money;

public:
    toolBooth() : total_cars(0), total_money()
    {
    }
    int payingCar()
    {
        total_cars++;
        total_money += 0.5;
    }
    int no_pay_Car()
    {
        total_cars++;
    }
    void display()
    {
        cout << "Total cars is = " << total_cars << endl
             << "Total money is = " << total_money << endl;
    }
};
int main()
{
    toolBooth cars;
    string choice;
    while (true)
    {
        cout << "Enter a for paying car and b for non paying car/c for display " << endl;
        cin >> choice;
        if (choice == "a")
        {
            cars.payingCar();
        }
        else if (choice == "b")
        {
            cars.no_pay_Car();
        }
        else if (choice == "c")
        {
            cout << "Total cars is = ";
            cars.display();
        }
        else
            cout << "Enter again" << endl;
    }
}
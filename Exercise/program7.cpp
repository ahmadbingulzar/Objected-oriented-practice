#include <iostream>
using namespace std;
class Angle
{
    int degree;
    float minutes;
    char direction;

public:
    Angle() : degree(0), minutes(0), direction(0)
    {
    }
    void get_values(int deg, float min, char direc)
    {
        degree = deg;
        minutes = min;
        direction = direc;
    }

    void display()
    {

        cout << "Angle: " << degree << "°" << minutes << "\' " << direction;
        if (direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w')
        {
            cout << " Longitude !";
        }
        if (direction == 'N' || direction == 'n' || direction == 'S' || direction == 's')
        {
            cout << " Latitude !";
        }
    }
};
int main()
{
    Angle angle_1;
    int degree;
    float minutes;
    char direction;
    string choice;
    do
    {
        cout << "Enter Degree = ";
        cin >> degree;
        cout << endl;
        cout << "Enter minutes = ";
        cin >> minutes;
        cout << endl;
        cout << "Enter direction = ";
        cin >> direction;
        cout << endl;

        angle_1.get_values(degree, minutes, direction);
        angle_1.display();
        cout << "Enter y to continue";
        cin >> choice;
    } while (choice == "y" || choice == "Y");
}
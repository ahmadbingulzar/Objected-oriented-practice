#include <iostream>
using namespace std;
class Angle
{
    int degree;
    float minutes;
    char direction;

public:
    void getAngle();
    void dispAngle() const;
};
class Ship
{

private:
    static int count;
    unsigned int serial_number;
    Angle latitude, longitude;

public:
    Ship()
    {

        count++;
        serial_number = count;
    }
    void getPosition();
    void display() const;
};
int Ship::count = 0;
void Angle::getAngle()
{
    cout << "\nEnter degrees: ";
    cin >> degree;
    cout << "Enter minutes: ";
    cin >> minutes;
    cout << "Enter directions(E, W, N, S): ";
    cin >> direction;
}
void Angle::dispAngle() const
{
    cout << degree << "°" << minutes << "\' " << direction;
    if (direction == 'E' || direction == 'e' || direction == 'W' || direction == 'w')
    {
        cout << " Longitude !";
    }
    if (direction == 'N' || direction == 'n' || direction == 'S' || direction == 's')
    {
        cout << " Latitude !";
    }
}

void Ship::getPosition()
{
    cout << "\nEnter longitude of ship: ";
    longitude.getAngle();
    cout << "\nEnter latitude of ship: ";
    latitude.getAngle();
}
void Ship::display() const
{
    cout << "Ship Serial Number: " << serial_number << endl;
    longitude.dispAngle();
    cout << endl;
    latitude.dispAngle();
    cout << endl;
}
int main()
{
    Ship ship1, ship2, ship3;
    cout << "\nEnter first ship position: ";
    ship1.getPosition();
    cout << "\nEnter second ship position: ";
    ship2.getPosition();
    cout << "\nEnter third ship position: ";
    ship3.getPosition();

    cout << "\nFirst Ship Position is: \n";
    ship1.display();
    cout << "\nSecond Ship Position is: \n";
    ship2.display();
    cout << "\nThird Ship Position is: \n";
    ship3.display();

    return 0;
}
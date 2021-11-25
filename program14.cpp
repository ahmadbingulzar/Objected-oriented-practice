/*This program is checking const functions with constant objects that 
constants objects can only use constant member functions of the same class
*/
#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance(int ft, float in) : feet(ft), inches(in)
    {
    }
    void getdist()
    {
        cout << "Enter feet :";
        cin >> feet;
        cout << "Enter inches :";
        cin >> inches;
    }
    void showdist() const
    {
        cout << "This is distance :" << feet << "\'-" << inches << '\"';
    }
};
int main()
{
    const Distance football(300, 0);
    // football.getdist();
    cout << "football = ";
    football.showdist();
    cout << endl;
    return 0;
}
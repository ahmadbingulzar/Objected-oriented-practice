#include <iostream>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0)
    {
    }
    Distance(int ft, float inc) : feet(ft), inches(inc)
    {
    }
    void getdist()
    {
        cout << " \n Enter feet:";
        cin >> feet;
        cout << "\n Enter inches ";
        cin >> inches;
    }
    void showlist()
    {
        cout << feet << "\'-" << inches << "\'-";
    }
};
int main()
{
    Distance d1(11, 6.25);
    Distance d2(d1);
    Distance d3 = d1;

    cout << "This is distance 1 = ";
    d1.showlist();
    cout << endl;
    cout << "This is distance 2 = ";
    d2.showlist();
    cout << endl;
    cout << "This is distance 3 = ";
    d3.showlist();
    cout << endl;
    return 0;
}

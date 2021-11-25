#include <iostream>
using namespace std;
class smallobj
{
private:
    int somedata;

public:
    void setdata(int d)
    {
        somedata = d;
    }
    void showdata()
    {
        cout << " Data is " << somedata << endl;
    }

    int multiplication(int a, int b)
    {
        int z = a * b;
        cout << "multiplicaiton is = " << z;
    }

} s1, s2;

int main()
{
    int first_value, second_value;
    cout << "Enter first value";
    cin >> first_value;
    cout << "enter second value";
    cin >> second_value;
    s1.setdata(first_value);
    s2.setdata(second_value);
    s1.showdata();
    s2.showdata();
    multiplication(first_value, second_value);
    return 0;
}
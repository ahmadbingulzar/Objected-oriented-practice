#include <iostream>
using namespace std;
class Fraction
{

    int numenator;
    int denomenator;

public:
    void set_Value()
    {
        char temp;
        cin >> numenator >> temp >> denomenator;
    }
    void display()
    {
        cout << "Fraction value is = " << numenator << "/" << denomenator << endl;
    }
    int add_fraction(Fraction obj_1, Fraction obj_2)
    {
        int result;
        result = obj_1.numenator + obj_2.numenator;
        int result_2 = obj_1.denomenator + obj_2.denomenator;
        cout << "Addition is = " << result << "/" << result_2 << endl;
    }
};
int main()
{
    string choice;
    Fraction obj_1, obj_2, obj_3;
    do
    {
        cout << "Enter first fraction in p/q form = ";
        obj_1.set_Value();
        cout << "Enter second fraction in p/q form = ";
        obj_2.set_Value();
        obj_1.display();
        obj_2.display();
        obj_3.add_fraction(obj_1, obj_2);
        cout << endl;
        cout << "Enter y to continue";
        cin >> choice;
    } while (choice == "y" || choice == "Y");
}
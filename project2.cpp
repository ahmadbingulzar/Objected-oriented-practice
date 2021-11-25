#include <iostream>
using namespace std;
class part
{
private:
    int model_number;
    int part_number;
    float cost;

public:
    void setpart(int mn, int pn, int c)
    {
        model_number = mn;
        part_number = pn;
        cost = c;
    }
    void display()
    {
        cout << "model number =" << model_number << endl;
        cout << "part number =" << part_number << endl;
        cout << "cost =" << cost << endl;
    }
};
int main()
{
    part part1;
    part1.setpart(1, 2, 3);
    part1.display();
    return 0;
}
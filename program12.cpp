#include <iostream>
using namespace std;
class static_check
{
private:
    static int count;

public:
    static_check()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
};
int static_check::count = 0;

int main()
{
    static_check f1, f2, f3;

    cout << "count at f1 is = " << f1.getcount() << endl;
    cout << "count at f2 is = " << f2.getcount() << endl;
    cout << "count at f3 is = " << f3.getcount() << endl;

    return 0;
}
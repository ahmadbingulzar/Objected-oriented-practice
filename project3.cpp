#include <iostream>
using namespace std;
class Distance
{

private:
    int feet;
    float inches;

public:
    void setdata(int ft, float inc)
    {
        feet = ft;
        inches = inc;
    }
    void getdata()
    {
        cout << "enter feet = ";
        cin >> feet;
        cout << "enter inches = ";
        cin >> inches;
    }
    void showdata()
    {
        cout << feet << "\'-" << inches << '\"';
    }
};
int main()
{
    Distance d1, d2;
    d1.setdata(11, 6.25);
    d2.getdata();

    cout << "distance 1 = ";
    ;
    d1.showdata();
    cout << endl;
    cout << "distance 2 = ";
    ;
    d2.showdata();
}

#include <iostream>
using namespace std;
class Prime
{
private:
    int number[8] = {0};

public:
    int prime_check(int user_number[8])
    {
        number[8] = user_number[8];
        cout << "class printing" << endl;
        for (int i = 0; i <= 8; i++)
        {
            cout << user_number[i] << endl;
        }
    }
    int maxPrime(int a[])
    {
        int i, j, l = 0;
        int check;
        for (i = 0; i <= 8; i++)
        {
            for (check = 1, j = 2; j <= a[i] / 2; j++)
            {
                if (a[i] % j == 0)
                {
                    check = 0;
                    break;
                }
            }
            if (check == 1)
            {
                if (a[i] > l)
                    l = a[i];
            }
        }
        return l;
    }
    void rotate(int arr[8])
    {
        int n = 8;
        int x = arr[n - 1], i;
        for (i = n - 1; i > 0; i--)
            arr[i] = arr[i - 1];
        arr[0] = x;
    }
};
int main()
{
    Prime user_1;
    int number[8] = {};
    int result_2[8] = {};
    for (int i = 0; i <= 8; i++)
    {
        cout << "Enter number greater than 5 and less then 8 :";
        cin >> number[i];
    }
    user_1.prime_check(number);
    int result = user_1.maxPrime(number);
    cout << "this is the largest number :" << result << endl;
    user_1.rotate(number);

    cout << "\nRotated array is\n";
    for (int i = 0; i < 8; i++)
        cout << number[i] << ' ';
}
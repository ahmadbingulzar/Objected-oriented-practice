#include<iostream>
using namespace std;
class Employee{
private:
        int employee_number;
        float employee_compensation;
public:
        void get_data(){
            cout<<"Enter employee number = ";
            cin>>employee_number;
            cout<<"Enter employee compensation = ";
            cin>>employee_compensation;
        }
        void display(){
            cout<<"This is employee number = "<<employee_number;
            cout<<"This is employee compensation = "<<employee_compensation;
        }
};
int main()
{
    Employee user_1,user_2,user_3;

    user_1.get_data();
    user_2.get_data();
    user_3.get_data();
    user_1.display();
    cout<<endl;
    user_2.display();
    cout<<endl;
    user_3.display();
    cout<<endl;
}
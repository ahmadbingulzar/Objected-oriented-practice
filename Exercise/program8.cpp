#include<iostream>
using namespace std;
class Serial_count{

private:    
        static int count;
        unsigned int serial_number;
public:
        void set_count(){
        
        count++;
        serial_number=count;

        }
        void display();


};
int  Serial_count::count=0;
void Serial_count::display(){
    cout<<"I am object : "<<serial_number<<endl;
}
int main()
{
    Serial_count obj_1,obj_2,obj_3;
    obj_1.set_count();
    obj_2.set_count();
    obj_3.set_count();

    obj_1.display();
    obj_2.display();
    obj_3.display();
}
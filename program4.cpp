#include<iostream>
using namespace std;
class counter
{
    private:
        unsigned int count ;
    public:
        counter(): count(0)
        {

        }
    int inc_count(){
        count++;

    }
    int get_count(){
        return count;
    }
};

int main(){

counter value_1,value_2;

cout<<"value_1 =" <<value_1.get_count() <<endl;
cout<<"value_2 =" <<value_2.get_count() <<endl;

value_1.inc_count();
value_2.inc_count();
value_1.inc_count();

cout<<"value_1 =" <<value_1.get_count() <<endl;
cout<<"value_2 =" <<value_2.get_count() <<endl;
cout<<endl;

}
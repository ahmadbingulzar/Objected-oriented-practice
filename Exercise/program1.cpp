#include<iostream>
using namespace std;
class Int{
int var_1;
public: 
    Int():var_1(0)
    {
    }
    Int(int value){
        var_1=value;
    }
    void addition(Int obj_1,Int obj_2)
    {
        int result= (obj_1.var_1+obj_2.var_1);
        cout<<"Result is = "<<result<<endl;
    }
};
int main()
{
    Int obj_1(5),obj_2(5),obj_3;
    obj_3.addition(obj_1,obj_2);
    return 0;
}
#include<iostream>
using namespace std;
class complex_number{
    private:
    int real;
    int imaginary;

    public:
    int get(int a,int b){
        real=a;
        imaginary=b;
    }
    void display(){
        cout<<"This is real number = "<<real<<endl
        <<"This is imaginary number = "<<imaginary<<"i"<<endl;
    }
};

int main(){
    complex_number a1;
    int real;
    int imaginary;
    
    cout<<"Enter real number";
    cin>>real;
    cout<<"Enter imaginary number";
    cin>>imaginary;
    a1.get(real,imaginary);
    a1.display();
    
}
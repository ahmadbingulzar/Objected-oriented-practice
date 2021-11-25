#include<iostream>
using namespace std;
class Distance{
private:
        int feet;
        float inches;
public:
    Distance() : feet(0),inches(0.0){

    }
    Distance(int ft,float inc): feet(ft),inches(inc){

    } 
void getdist(){
    cout<<"Enter feet = "; cin>>feet;
    cout<<"Enter inches = "; cin>>inches;
}
void showlist(){
    cout<<feet<<"\'-"<<inches<<"\'-";
}

};
int main()
{
    Distance d1;
    d1.getdist();
    d1.showlist();

}

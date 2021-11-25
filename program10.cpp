#include<iostream>
using namespace std;
class Distance {

    private:
            int feet;
            float inches;
    public:
            Distance():feet(0),inches(0.0)
            {

            }
            Distance(int ft,float inc):feet(ft),inches(inc)
            {

            }
            void getdist()
            {
                cout<<"Enter feet :"; cin>>feet;
                cout<<"Enter inches :"; cin>>inches;

            }
            void showlist(){
                cout<<feet<<"\'-"<<inches<<"\'-";

            }
            void add_distance(Distance,Distance);   //declaration
};
void Distance::add_distance(Distance d2,Distance d3)
{
    inches=d2.inches+d3.inches;
    feet=0;
    if(inches>=12.0)
    {
        inches-=12.0;
        feet++;
    }
    feet+=d2.feet+d3.feet;
}

int main()
{
    Distance d1,d2(11,6.25),d3;
    d1.getdist();
    d3.add_distance(d1,d2);

cout<<"This is distance 1 = "; d1.showlist();
cout<<endl;
cout<<"This is distance 2 = "; d2.showlist();
cout<<endl;
cout<<"This is distance 3 = "; d3.showlist();
cout<<endl;
return 0;
}

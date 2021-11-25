#include<iostream>
using namespace std;

int solution(int  array[]) {
    int num;
 int f=0;
 int get;
  for(int i = 1;i < 5; ++i)

    {

       if(array[0] < array[i])
           array[0] = array[i];
    }
    get=array[0];
    int final=get-1;
    for (int i = 0; i < 5; i++) {
        if ( final== array[i]) {
            f = 1;
            break;
        }
    }
    if(final<0)
    {
        return 1;
    }
    if (f == 1) {
        cout<<get+1<<endl;
    } else 
    {
        cout<<get-1<<endl;
    }
    
}
int main()
{    int array[6]={-1,-3};

    solution(array);

}


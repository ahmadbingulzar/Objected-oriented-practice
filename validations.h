   #include<iostream>
   using namespace std;
bool prime_check(int lastelement){ 
       bool flag=true;
   for (int i = 2; i <= lastelement / 2; i++)
    {
        if (lastelement % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
        return true;
    else
        return false;
   }
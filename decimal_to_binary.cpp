#include<iostream>
using namespace std;
void myself(int num)
{
    if(num == 0)
    {
        return ;
    }
    else
    {
        int mypart = num % 2;
        int lastpart  = num / 2;
        myself(lastpart);
        cout << mypart << endl;

    }
}
int main()
{
    n myself(10);
}


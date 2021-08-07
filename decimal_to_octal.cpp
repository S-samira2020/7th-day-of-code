#include<iostream>
using namespace std;
int myself(int num)
{
    if(0 <= num && num <= 9)
    {
        return num;
    }
    else
    {
        int mypart = num % 8;
        int lastpart  = num / 8;
        int colpart = myself(lastpart);
        return mypart + colpart;

    }
}
int main()
{
    cout << myself(56) << endl;
}


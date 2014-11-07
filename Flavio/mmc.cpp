#include <iostream>

using namespace std;

int MMC(int num1, int num2)
{
    int x,y,r,mmc;

    x = num1;
    y = num2;
    do
    {
        r = x % y;
        x = y;
        y = r;
    }
    while (r != 0);

    mmc = (num1 * num2) / x;

    return mmc;
}
int main()
{
    int a,b;

    cout<<"\n\tEncontre o MMC entre dois numeros\n";

    cout<<"\nDigite o valor 1: ";
    cin>>a;

    cout<<"\nDigite o valor 2: ";
    cin>>b;

    cout<<"\nO MMC entre eles e': "<<MMC(a,b)<<"\n\n";

    return 0;
}

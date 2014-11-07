#include <iostream>

using namespace std;

int mdc(int a, int b)
{
    int resto;

    while(b != 0)
    {
        resto=a%b;
        a=b;
        b=resto;
    }

    return a;
}

int main()
{
   int x,y;

   cout<<"\n\tEncontre o MDC entre dois numeros\n";

   cout<<"\nDigite o valor 1: ";
   cin>>x;

   cout<<"\nDigite o valor 2: ";
   cin>>y;

   cout<<"\nO MMC entre eles e': "<<mdc(x,y)<<"\n";

   if(mdc(x,y) == 1)
       cout<<"\nOs numeros sao primos entre si\n\n";
   else
       cout<<"\nOs numeros nao sao primos entre si\n\n";

   return 0;

}

#include <iostream>

using namespace std;
int main()
{
   float x[5],avg;

   for(int i=0; i<5; i++)
   {
       cout << "\nIMPUT avg " << i+1 << " : ";
       cin >> x[i];
       avg = x[i]/5;
   }



   cout << "\nAVG is: " << avg;


}

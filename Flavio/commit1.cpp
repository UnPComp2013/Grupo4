#include <iostream>

using namespace std;
int main()
{
   int a,b,c=0;
   cout<<"Enter value of 1st variable: ";
   cin>>a;
   cout<<"Enter value of 2nd variable: ";
   cin>>b;


    ///{ Write your code here

    if(a>b)
    {
       cout<<"Greater value is "<<a;
    }
      else if(a<b)
      {
        cout<<"Greater value is "<<b;
      }
         else if(a=b)
         {
            cout<<"Both are equal";
         }


}

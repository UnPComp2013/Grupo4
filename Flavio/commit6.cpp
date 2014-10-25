#include <iostream>
using namespace std;

int main()
{
   int choice;
   float radius,area,perimeter;
   cout<<"\n 1. Area of circle :";
   cout<<"\n 2. Perimeter of circle :";
   cout<<"\n Enter choice :";
   cin>>choice;
   cout<<"\n Enter radius of cirle :";
   cin>>radius;
   ///{ Write your code here

   switch(choice)
  {
      case 1:

      area=3.14*radius*radius;

      cout<<"\nArea is: "<<area;

      break;

      case 2:

      perimeter= 2*3.14*radius;

      cout<<"\nPerimeter is: "<<perimeter;

      break;

      default:

	  cout << "opcao invalida \n";

	  break;
  }


   ///}

   return 0;
}

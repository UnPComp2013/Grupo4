#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
   int a,b,c=0;
   cin>>a>>b;

    ///{ Write your code here

    if((a>b) && (a>0))
    {
        a++;
    }
    else
        a--;

   ///}

   cout<<a;
}

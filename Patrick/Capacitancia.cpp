// Capacitancia
// Rc = constante de tempo
// 5Rc = tempo de carga do capacitor
// v=(1-exp(t(r*c)))

#include <iostream>
#include <cmath>

using namespace std;


int main ()

{
    double c=100*pow(10,-6), r=100*pow(10,3), t, v=12, vc;

    for (t=0; t<=(5*(r*c)); t+=((r*c)/10))
{
        vc=v*(1-exp(-t/(r*c)));
        cout << vc << "\n";
}

return 0;

}

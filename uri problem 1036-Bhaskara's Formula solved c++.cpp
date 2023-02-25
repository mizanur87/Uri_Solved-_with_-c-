#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){

    double a,b,c,rout,r1,r2; //intiating variables

    cin >> a >> b >> c; //Getting input

    rout = b*b - 4 * a * c; //pre calculation

    if ( rout<=0 || a==0 ){  //checking if pre calculation == 0?
        cout << "Impossivel calcular\n";
    }
    else {    //calculation R1 and R2
        r1 = (-b + sqrt(rout)) / (2*a);
        r2 = (-b - sqrt(rout)) / (2*a);

        cout << fixed << setprecision(5) << "R1 = " << r1 << "\n";
        cout << fixed << setprecision(5) << "R2 = " << r2 << "\n";
    }


    return 0;
}


#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    int x,y;//initalizing x= productcode, y= quantity

    cin >> x >> y;//getting user input

    //condition checking
    if (x==1){
        cout << fixed << setprecision(2) << "Total: R$ " <<float (y) * 4.00 << "\n";
    }
    else if (x==2){
        cout << fixed << setprecision(2) << "Total: R$ " <<float (y) * 4.50 << "\n";
    }
    else if (x==3){
        cout << fixed << setprecision(2) << "Total: R$ " <<float (y) * 5.00 << "\n";
    }
    else if (x==4){
        cout << fixed << setprecision(2) << "Total: R$ " <<float (y) * 2.00 << "\n";
    }
    else if (x==5){
        cout << fixed << setprecision(2) << "Total: R$ " <<float (y) * 1.50 << "\n";
    }


    return 0;
}

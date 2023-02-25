// Online C++ compiler to run C++ program online

#include <iostream>
using namespace std;
int main() {
    
    double x,y;//intiating variables

    cin >> x >> y;//Getting input

    if (x>0 && y>0){ //checking conditions
        cout<< "Q1\n";
    }
    else if (x<0 && y>0){
        cout << "Q2\n";
    }
    else if (x<0 && y<0){
        cout << "Q3\n";
    }
    else if (x>0 && y<0) {
        cout << "Q4\n";
    }
    else if (x==0 && (y>0 || y<0)){
        cout << "Eixo Y\n";
    }
    else if (y==0 && (x>0 || x<0)){
        cout << "Eixo X\n";
    }
    else {
        cout <<"Origem\n";
    }

    return 0;
}

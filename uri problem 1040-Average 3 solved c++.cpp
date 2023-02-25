#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double a,b,c,d,avg;

    cin >> a >> b >> c >> d;

    a *= 2;
    b *= 3;
    c *= 4;
    d *= 1;

    avg = (a + b+ c + d) / 10;

    if ( avg >= 7){
        cout <<  fixed << setprecision(1)  << "Media: " << avg <<"\nAluno aprovado.\n";
    } else if(avg < 5) {

        cout <<  fixed << setprecision(1)  << "Media: " << avg <<"\nAluno reprovado.\n";
    } else {

        cout <<  fixed << setprecision(1)  << "Media: " << avg ;
        cout <<"\nAluno em exame.\n";

        double abg2,e;
        cin >> e;
        cout <<"Nota do exame: " << e << "\n";

        abg2 = (e+avg)/2;

        if (abg2 > 5 ){
            cout << "Aluno aprovado.\n";
        }

        else if (abg2 >= 4.9){
            cout << "Aluno reprovado.\n";
        }

        cout << fixed << setprecision(1) <<"Media final: " << abg2 << "\n";





    }


    return 0;
}



#include <bits/stdc++.h>

using  namespace  std;

int main() {

    vector<int> num1(3);

    cin >> num1.at(0);
    cin >> num1.at(1);
    cin >> num1.at(2);

    int a,b,c;

    a = num1.at(0);
    b = num1.at(1);
    c = num1.at(2);


    sort(num1.begin(),num1.end());

    for (auto i=0; i<num1.size();i++){
        cout << num1.at(i) << endl;
    }

    cout << "\n" <<a << endl;
    cout << b << endl;
    cout << c << endl;


    return 0;
}

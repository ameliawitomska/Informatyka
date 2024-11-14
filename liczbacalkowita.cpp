#include <iostream>

using namespace std;

int main() {
    int k;
    double l;

    cout << "Wprowadz liczbe calkowita: ";
    cin >> l; 

    
    k = l;
    cout << "int: " << k << endl;
    cout << "double: " << l << endl;

    if(k==l){
    cout << "Liczba calkowita" << endl;
    }
    else{
    cout << "Liczba niecalkowita" << endl;
    }


    return 0;
}

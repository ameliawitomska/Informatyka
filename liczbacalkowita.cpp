#include <iostream>

using namespace std;

int main() {
    int k;
    double l;

    cout << "Wprowadz liczbe calkowita: ";
    cin >> l; 

    
     k = static_cast<int>(l);
    cout << "int: " << k << endl;
    cout << "double: " << l << endl;

    if(k==l){
    cout << "Liczba calkowita";
    }
    else{
    cout << "Liczba niecalkowita";
    }


    return 0;
}
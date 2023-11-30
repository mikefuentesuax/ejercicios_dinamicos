#include <iostream> 
#include <valarray>

using namespace std;

int main(){

    valarray<double> v1 = {1,2,3,4,25};

    valarray<double> suma = v1 + 5.5;
    valarray<double> resta = v1 - 5.5;
    valarray<double> multiplicacion = v1 * 5.5;
    valarray<double> division = v1 / 5.5;

    cout <<"Original: ";
    for (auto numero : v1){
        cout << numero << ' ';
    }
    cout << endl;

    cout <<"Suma: ";
    for (auto numero : suma){
        cout << numero << ' ';
    }
    cout << endl;

    cout <<"Resta: ";
    for (auto numero : resta){
        cout << numero << ' ';
    }   
    cout << endl;

    cout <<"Multiplicacion: ";  
    for (auto numero : multiplicacion){
        cout << numero << ' ';
    }
    cout << endl;

    cout <<"Division: ";    
    for (auto numero : division){
        cout << numero << ' ';
    }   
    cout << endl;

    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>   

using namespace std;

int main(){

auto cuadrado = [](int x){return x*x;};
auto numero = 5;
auto resultado = cuadrado(numero);
cout << "El cuadrado de " << numero << " es " << resultado << endl;

vector<int> numeros = {1,2,3,4,5};   
cout << "El cuadrado de los elementos es: ";
for_each(numeros.begin(), numeros.end(), [cuadrado](int& num){
num = cuadrado(num);
cout << num << " ";
});
cout << endl;

unique_ptr<int> ptr = make_unique<int>(5);

cout << "El valor de ptr es: " << *ptr << endl;


    return 0;
}
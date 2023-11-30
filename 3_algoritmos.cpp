#include <iostream> 
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> numeros={19,16,18,11,15,13,10,12,14,17};
    sort(numeros.begin(),numeros.end());
    cout <<"Numeros ordenados: "<<endl;
    for (const auto& valor : numeros){
        cout << valor << ' ';
    }
cout << endl;

auto maximo = max_element(numeros.begin(),numeros.end());
cout <<"El valor maximo es: "<<*maximo<<endl;

auto minimo = min_element(numeros.begin(),numeros.end());
cout <<"El valor minimo es: "<<*minimo<<endl;

return 0;

}

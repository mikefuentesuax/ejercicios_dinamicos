#include <iostream>
#include <list>
#include <stack>

using namespace std;

int main(){
    list<double> listadecimal={1.1,2.2,3.3,4.4,5.5};
    stack<double, list<double>> decimalStack(listadecimal);
    cout <<"Lista original: "<<endl;
    for (const auto &valor : listadecimal){
        cout << valor << ' ';
    }
    cout << endl;
decimalStack.push(6.6); 
decimalStack.push(7.7);
cout <<"El valor de la parte superior es: "<<decimalStack.top() << endl;
decimalStack.pop();
cout <<"Pila despues de una operacion pop: "<<endl;
while (!decimalStack.empty()){
    cout << decimalStack.top() << ' ';
    decimalStack.pop();
    }
    cout << endl;
    return 0;
}

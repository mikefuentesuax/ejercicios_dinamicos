#include <iostream>
#include <boost/lexical_cast.hpp>

using namespace std;

int main(){
    try{
        int numero = boost::lexical_cast<int>("123");
        cout << "El numero es: " << numero << endl;
        string cadena = boost::lexical_cast<string>(456);
        cout << "La cadena es: " << cadena << endl;
    }
    catch(boost::bad_lexical_cast &error){
        cout << "Error: " << error.what() << endl;
    }
    return 0;
}
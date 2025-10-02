#include <iostream>

int main(int argc, char const *argv[]){

    int *pNumero = NULL;
    pNumero = new int;
    *pNumero =25;

    std :: cout << "direccion: " << pNumero << '\n';
    std :: cout << "Valor: " << *pNumero << '\n';
    std :: cout << "Size: " << sizeof(pNumero) << '\n';
    std :: cout << "Dir Puntero: " << &pNumero << '\n';
    
    return 0;
}
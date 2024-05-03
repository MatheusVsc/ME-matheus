#include <iostream>
#include "bin_conv.h"

int main(){
    int valor;
    std::cout << "Digite um valor entre 0 e 1023: ";
    std::cin >> valor;
    conversao(valor);
    return 0;
}
#include <iostream>
void conversao(int valor){
    if (0 <= valor && valor < 1024){
        std::cout << valor/512;
        valor %= 512;
        std::cout << valor/256;
        valor %= 256;
        std::cout << valor/128;
        valor %= 128;
        std::cout << valor/64;
        valor %= 64;
        std::cout << valor/32;
        valor %= 32;
        std::cout << valor/16;
        valor %= 16;
        std::cout << valor/8;
        valor %= 8;
        std::cout << valor/4;
        valor %= 4;
        std::cout << valor/2;
        valor %= 2;
        std::cout << valor << "\n";
    }
}
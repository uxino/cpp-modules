#include <iostream>

#define MAX_SIZE 100

struct Function
{
    void (*func)()[4];
};

void myFunction1()
{
    std::cout << "myFunction1 is called!" << std::endl;
}

void myFunction2() {
    std::cout << "myFunction2 is called!" << std::endl;
}

int main() {
    Function functionList[MAX_SIZE]; // Fonksiyon adreslerini saklamak için bir dizi oluşturuldu
    int index = 0;

    // Fonksiyon adreslerini diziye ekle
    functionList[index++].func = myFunction1;
    functionList[index++].func = myFunction2;

    // Dizideki fonksiyonları çağır
    for (int i = 0; i < index; i++) {
        functionList[i].func(); // Fonksiyonu çağır
    }

    return 0;
}

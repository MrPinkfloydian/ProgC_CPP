#include <iostream>
#include <ctime> // livraria importada

using namespace std;

void mudarLinha() {
    std::cout << std::endl; // Função para adicionar uma linha em branco
}

void meuCarimbo() {
    time_t timestamp = time(NULL);
    struct tm datetime = *localtime(&timestamp);
    cout << "Ricardo Moreira - " << asctime(&datetime); // Imprime assinatura com o carimbo 
}

int main() {
    
    int numeros[5] = {10, 20, 30, 40, 50};
    
    int *ptr = numeros;
    
    std::cout << "Primeiro elemento do array: " << numeros[0];
    mudarLinha(); // Para chamar a função para adicionar uma linha em branco... e por aí fora...
    
    std::cout << "Valor indicado pelo apontador: " << *ptr;
    mudarLinha();
    
    ptr++; // Avança o ponteiro para o próximo elemento

    std::cout << "Subsequente valor do segundo elemento apontado: " << *ptr;
    mudarLinha();

    ptr--; // O ponteiro regressa ao primeiro número

    std::cout << "Valor do primeiro elemento apontado: " << *ptr;
    mudarLinha();

    std::cout << "Valor do terceiro elemento: " << *(ptr + 2);
    mudarLinha();

    mudarLinha(); // Parágrafo extra...
    meuCarimbo();  // Para chamar a função para exibir a assinatura e o timestamp

    return 0;
}
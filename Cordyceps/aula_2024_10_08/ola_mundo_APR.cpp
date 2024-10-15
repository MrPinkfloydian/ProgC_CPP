#include <iostream>
#include <fstream>
#include <string>
#include <clocale>

using namespace std;

// UFCD_U15
// André Proença
// 2024-10-08

int main() {
    // Definir a codificação para UTF-8
    setlocale(LC_ALL, "");

    char mensagem[15] = "Olá Mundo!";

    // Abrir ficheiro para escrita
    ofstream ficheiro("ola_mundo_APR.txt");

    if (!ficheiro.is_open()) {
        cerr << "Erro ao abrir o ficheiro para escrita." << endl;
        return 1;
    } 
    else {

        // Escrever a mensagem no ficheiro e calcular e escrever o tamanho dos tipos de dados
        ficheiro << mensagem << "\n\n"
                 << "Tamanho dos tipos de dados em bytes:\n"
                 << "char: "        << sizeof(char)         << " bytes\n"
                 << "short: "       << sizeof(short)        << " bytes\n"
                 << "int: "         << sizeof(int)          << " bytes\n"
                 << "long: "        << sizeof(long)         << " bytes\n"
                 << "long long: "   << sizeof(long long)    << " bytes\n"
                 << "float: "       << sizeof(float)        << " bytes\n"
                 << "double: "      << sizeof(double)       << " bytes\n"
                 << "long double: " << sizeof(long double)  << " bytes" << endl;

        cout << "\nResultados salvos em 'ola_mundo_APR.txt'" << endl;
    }

    ficheiro.close();

    return 0;
}

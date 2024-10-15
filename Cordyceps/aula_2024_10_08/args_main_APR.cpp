#include <iostream>
#include <fstream>
#include <clocale>

using namespace std;

int main(int argc, char* argv[]) {

    // Definir a codificação para UTF-8
    setlocale(LC_ALL, "");
    
    // Escrever os argumentos no terminal e no terminal
    cout << "O nome do programa é: "            << argv[0]  << "\n"
         << "Número de argumentos passados: "   << argc     << "\n"
         << "----De seguida constam os argumentos passados por linha de comandos----" << endl;

    // Abrir um arquivo de texto para salvar os argumentos
    ofstream ficheiro("args_main_APR.txt");

    if (!ficheiro.is_open()) {
        cerr << "Erro ao abrir o ficheiro para escrita." << endl;
        return 1;
    }

    // Escrever cabeçalho informativo no ficheiro
    ficheiro << "O nome do programa é: "            << argv[0]  << "\n"
             << "Número de argumentos passados: "   << argc     << "\n"
             << "----De seguida constam os argumentos passados por linha de comandos----" << endl;

    // Escrever os argumentos no terminal e no ficheiro
    for (int i = 0; i < argc; i++) {
        cout        << "argv[" << i << "]: " << argv[i] << endl;
        ficheiro    << "argv[" << i << "]: " << argv[i] << endl;
    }

    // Fechar o arquivo
    ficheiro.close();
    
    return 0;
}

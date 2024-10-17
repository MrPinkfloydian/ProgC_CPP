#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void exemploPonteiroSimples() {
    int var = 20;
    int *ptr = &var;
    cout << "Valor da variável: " << var << endl;
    cout << "Endereço da variável: " << &var << endl;
    cout << "Valor do ponteiro: " << ptr << endl;
    cout << "Valor apontado pelo ponteiro: " << *ptr << endl;
}

void exemploPonteiroComArray() {
    int numeros[5] = {10, 20, 30, 40, 50};
    int *ptr = numeros;
    cout << "Elementos do array usando ponteiros: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}

void exemploPonteiroParaPonteiro() {
    int var = 30;
    int *ptr = &var;
    int **ptrPtr = &ptr;
    cout << "Valor da variável: " << var << endl;
    cout << "Endereço do ponteiro: " << ptr << endl;
    cout << "Valor do ponteiro: " << *ptr << endl;
    cout << "Valor apontado pelo ponteiro para ponteiro: " << **ptrPtr << endl;
}

void mostrarTexto(const string& caminho) {
    ifstream arquivo(caminho);
    if (!arquivo) {
        cout << "Erro ao abrir o arquivo!" << endl;
        return;
    }

    string linha;
    while (getline(arquivo, linha)) {
        cout << linha << endl;
    }
    arquivo.close();
}

int main() {
    int opcao;
    do {
        cout << "\nMenu de Opções:\n";
        cout << "1. Exemplo de ponteiro simples\n";
        cout << "2. Exemplo de ponteiro com array\n";
        cout << "3. Exemplo de ponteiro para ponteiro\n";
        cout << "4. Sair\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                mostrarTexto("ponteiroSimples.txt");  // Carregar o texto explicativo do arquivo
                exemploPonteiroSimples();  // Mostrar o exemplo correspondente
                break;
            case 2:
                mostrarTexto("ponteiroArray.txt");
                exemploPonteiroComArray();
                break;
            case 3:
                mostrarTexto("ponteiroParaPonteiro.txt");
                exemploPonteiroParaPonteiro();
                break;
            case 4:
                cout << "Saindo do programa..." << endl;
                break;
            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }
    } while (opcao != 4);

    return 0;
}

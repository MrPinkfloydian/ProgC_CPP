#include <iostream>
#include <fstream> // Para trabalhar com ficheiros

using namespace std;

int main() {
    int horas, minutos, segundos;

    // Leitura das horas com validação
    do {
        cout << "Introduza as horas (1-23): ";
        cin >> horas;
        if (horas < 1 || horas > 23) {
            cout << "Erro: As horas devem estar entre 1 e 23." << endl;
        }
    } while (horas < 1 || horas > 23);

    // Leitura dos minutos com validação
    do {
        cout << "Introduza os minutos (0-59): ";
        cin >> minutos;
        if (minutos < 0 || minutos >= 60) {
            cout << "Erro: Os minutos devem estar entre 0 e 59." << endl;
        }
    } while (minutos < 0 || minutos >= 60);

    // Leitura dos segundos com validação
    do {
        cout << "Introduza os segundos (0-59): ";
        cin >> segundos;
        if (segundos < 0 || segundos >= 60) {
            cout << "Erro: Os segundos devem estar entre 0 e 59." << endl;
        }
    } while (segundos < 0 || segundos >= 60);

    // Calcular o total de segundos
    int totalSegundos = (horas * 3600) + (minutos * 60) + segundos;

    // Exibir o resultado
    cout << "O total de segundos desde as 00:00 é: " << totalSegundos << endl;

    // Guardar o resultado num ficheiro de texto
    ofstream ficheiro("total_segundos.txt");
    if (ficheiro.is_open()) {
        ficheiro << "Total de segundos desde as 00:00: " << totalSegundos << endl;
        ficheiro.close();
        cout << "Resultado guardado no ficheiro 'total_segundos.txt'." << endl;
    } else {
        cout << "Erro ao abrir o ficheiro!" << endl;
    }

    return 0;
}

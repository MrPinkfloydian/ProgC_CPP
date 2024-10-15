#include <iostream>
#include <fstream>

using namespace std;

 
 // UFCD_U15
 // André Proença
 // 2024-10-08

int main() {

    int horas, minutos, segundos;
    int total_segundos;

    // Pedir as horas ao utilizador     
    cout << "Introduza o número de horas (Obs: devem esstar compreendidas entre 1 e 23): ";
    cin >> horas;

    //Verificar se as horas estão dentro do intervalo pedido
    while (horas < 1 || horas > 23) {
        cout << "Erro: As horas devem estar compreendidas entre 1 e 23. Tente novamente: ";
        cin >> horas;
    }

    
    //Pedir os minutos ao utilizador
    cout << "\nMuito bem! sabes respeitar parâmetros! \nAgora, queremos os minutos. Entre 0 e 59" << endl;
    cin >> minutos;

    //Verificar se os minutos estão dentro do intervalo pedido
    while (minutos < 0 || minutos >= 60) {
        cout << "\nJá devias saber que os minutos devem estar entre 0 e 59. Tenta lá outra vez sffv: " << endl;
        cin >> minutos;
    }

    //Pedir os segundos ao utilizador
    cout << "\nVamos agora para os segundos! \nSerá que és capaz de respeitar o intervalo?\nÀ semelhança dos minutos, os segundos devem estar compreendidos entre 0 e 59 ;)" << endl;
    cin >> segundos;

    // Validação dos segundos
    while (segundos < 0 || segundos >= 60) {
        cout << "\nMas és burro ou fazes-te??\nOs segundos devem estar entre 0 e 59!!!\nTenta lá outra vez: ";
        cin >> segundos;
    }

    //Calcular o total de segundos desde as 00:00
    total_segundos = (horas * 3600) + (minutos * 60) + segundos;

    cout << "\n\nTotal de segundos desde a meia noite: " << total_segundos << endl;


    // Guardar o total de segundos num ficheiro de texto
    ofstream ficheiro("total_segundos_APR.txt");
    if (!ficheiro.is_open()) {
        cerr << "Erro ao abrir o ficheiro para escrita.\n";
        return 1;
    } 
    else {
        ficheiro << "Total de segundos desde a meia noite: " << total_segundos << endl;
    }

    ficheiro.close();

    return 0;
}

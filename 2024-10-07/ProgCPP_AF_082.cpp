#include <iostream>
#include <algorithm>

using namespace std;

// Fun‡„o para calcular a soma de todos os n£meros entre dois valores fornecidos
int somaEntre(int a, int b) {
	
    // Garantir que o n£mero 'a' ‚ sempre o menor
    if (a > b) { // Valida‡„o...
        swap(a, b);
    }
    int soma = 0;
    for (int i = a; i <= b; i++) {
        soma += i;
    }
    return soma;
}

// Programa principal
int main() {
    int num1, num2;
    
    cout << "Introduza o primeiro n£mero inteiro: ";
    cin >> num1;
    
    cout << "Introduza o segundo n£mero inteiro: ";
    cin >> num2;
    
    int resultado = somaEntre(num1, num2);
    
    cout << "A soma de todos os n£meros entre " << num1 << " e " << num2 << " ‚ " << resultado << endl;
    
    return 0;
}
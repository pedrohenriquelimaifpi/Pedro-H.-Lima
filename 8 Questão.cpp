#include <iostream>
#include <string>
using namespace std;

int main() {
    string nomes[6];
    string nome;
    bool encontrado = false;
    
    for (int i = 0; i < 6; i++) {
        cout << "Digite um nome: ";
        cin >> nomes[i];
    }
    
    cout << "Digite um nome para buscar: ";
    cin >> nome;
    
    for (int i = 0; i < 6; i++) {
        if (nomes[i] == nome) {
            encontrado = true;
            break;
        }
    }
    
    if (encontrado) {
        cout << "Nome encontrado." << endl;
    } else {
        cout << "Nome não encontrado." << endl;
    }
    
    return 0;
}

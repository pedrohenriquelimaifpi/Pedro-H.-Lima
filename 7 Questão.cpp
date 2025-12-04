#include <iostream>
using namespace std;

int main() {
    int x;
    int posição = -1;
    int n[10];
    
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor do numero " << i + 1 << ": ";
        cin >> n[i];
    }
  
    cout << "Digite o valor para verificação: ";
    cin >> x;
    
    for (int i = 0; i < 10; i++) {
        if(n[i] == x) {
            posição = i;
            break; 
        }
    }
    
    if(posição != -1) {
        cout << "O número " << x << " está dentro do vetor." << endl;
        cout << "Ele aparece pela primeira vez na posição " << posição + 1 << "." << endl;
    }
    else {
        cout << "O número " << x << " não está dentro do vetor." << endl;
    }
    
    return 0;
}

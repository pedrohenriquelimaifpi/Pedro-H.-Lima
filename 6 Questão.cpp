#include <iostream>
using namespace std;

int main()
{
    int num[8];
    int maior;
    int menor;
    int pos_maior;
    int pos_menor;

   
    for(int i = 0; i < 8; i++){
        cout << "Digite um número inteiro: ";
        cin >> num[i];
    }
    maior = num[0];
    menor = num[0];
    pos_maior = 0;
    pos_menor = 0;
  
    for(int i = 1; i < 8; i++){
        if(num[i] > maior){
            maior = num[i];
            pos_maior = i;
        }
        if(num[i] < menor){
            menor = num[i];
            pos_menor = i;
        }
    }

    cout << "O maior valor é: " << maior << " na posição " << pos_maior << endl;
    cout << "O menor valor é: " << menor << " na posição " << pos_menor << endl;

    return 0;
}

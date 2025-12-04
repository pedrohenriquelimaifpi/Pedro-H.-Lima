int main()
{
    int soma = 0;
    int num[5];

    for(int i = 0; i < 5; i++){
        cout << "Digite os 5 números inteiros para armazenamento: " << endl;
        cin >> num[i]; 
        soma += num[i];
    }
         cout << "O números digitados foram: " << endl;
    for (int i =0 ;i <5; i++){
        cout << num[i] << endl;
    }
   cout <<"A soma dos valores é: " << soma << endl;
   cout << "A média dos valores é: " << soma / 5 << endl;

}

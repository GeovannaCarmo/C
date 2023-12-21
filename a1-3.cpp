#include <iostream>

using namespace std;

int main() {
    cout << "Digite o tamanho da seq (>=1):";
    int n;
    cin >> n;
    cout << "Entre com o primeiro elemento da sequencia:";
    int cand; 
    // candidato a maximo, ou seja, é um maior numero
    // dentre os observados até o momento
    cin >> cand;
   
    while (--n > 0) {
        cout << "Entre com o proximo numero:";
        int x;
        cin >> x;
        if (x > cand) cand = x;
  
    }
    cout << "Um maior é: " << cand << "\n";

}
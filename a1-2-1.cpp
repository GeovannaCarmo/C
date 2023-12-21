#include <iostream>
using namespace std;

int main() {
    cout << "Digite o primeiro numero: ";
    int x;
    cin >> x;
    cout << "Digite o segundo numero: ";
    int y;
    cin >> y;
    int z = x >= y ? x : y;
    cout << "Um maior é " << z << "\n";
}
#include <iostream>

using namespace std;

int main() {
    int v[] = {2, 3, 1, 4, 5};
    //for (int x: v) cout << x << "\n";
    cout << "numero de bytes de um int: " << sizeof(int) << "\n";
    cout << "numero de bytes de v:" << sizeof(v) << "\n";
    int w[10];
    cout << "numero de bytes de v:" << sizeof(w) << "\n";
}
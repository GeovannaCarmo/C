#include <iostream>

using namespace std;

int maximum(int x, int y) {
    return x >= y ? x : y;
}

int main() {
    cout << maximum(10+5, maximum(20, 40)) << "\n";
}

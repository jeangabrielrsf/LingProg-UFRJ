#include <iostream>

using namespace std;

int main() {
    int x = 3;
    int &y = x; // y é uma referência

    cout << "x vale: " << x << endl << "y vale: " << y << endl;
    y = 7;

    cout << "\nx = " << x << endl << "y: " << y << endl;

    return 0;
}
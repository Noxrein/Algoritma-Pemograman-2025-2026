#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Masukkan nilai a: ";
    cin >> a;
    cout << "Masukkan nilai b: ";
    cin >> b;

    if (a > b) {
        cout << "a lebih besar dari b" << endl;
    } else if (a < b) {
        cout << "a lebih kecil dari b" << endl;
    } else {
        cout << "a sama dengan b" << endl;
    }

    return 0;
}
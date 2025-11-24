#include<iostream>
using namespace std;

int main() {
    float tugas, uts, uas, nilaiAkhir;

    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    nilaiAkhir = (0.3 * tugas) + (0.3 * uts) + (0.4 * uas);

    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    if (nilaiAkhir>=60)
    
      cout << "Status: Lulus" << endl;
      else
      {
        cout << "Status: Tidak Lulus" << endl;
      }
    
    return 0;
}
#include <iostream>
using namespace std;

int main() {
  string nama = "Rizky";
  int umur = 18;
  float tinggi = 169;
  bool aktif = true;

  cout << "Nama: " << nama << endl;
  cout << "Umur: " << umur << endl;
  cout << "Tinggi: " << tinggi << " cm" << endl;
  cout << "Aktif: " << (aktif ? "Ya" : "Tidak") << endl;
}
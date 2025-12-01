#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string nama;
    string konfirmasi;

    while (true) {
        cout << "Masukkan nama anda: ";
        getline(cin, nama);

        konfirmasi = "";
        while (konfirmasi != "true" && konfirmasi != "false") {
            cout << "Apakah nama sudah benar? (true/false): ";
            getline(cin, konfirmasi);
        }

        if (konfirmasi == "true") break;

        cout << "Silakan masukkan nama kembali.\n";
    }

    string nim;
    bool nimBenar = false;

    while (!nimBenar) {
        cout << "Masukkan NIM: ";
        getline(cin, nim);

        bool angka = true;
        for (char c : nim) {
            if (!isdigit((unsigned char)c)) angka = false;
        }

        if (angka && nim != "") {
            nimBenar = true;
        } else {
            cout << "NIM harus angka!\n";
        }
    }

    long long saldo = stoll(nim);

    cout << "\nNama: " << nama << "\n";
    cout << "Saldo Awal: Rp " << saldo << "\n\n";

    while (true) {
        cout << "===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n";
        cout << "2. Tarik Tunai\n";
        cout << "3. Setor Tunai\n";
        cout << "4. Transfer\n";
        cout << "5. Keluar\n";
        cout << "Pilih menu (1-5): ";

        string pilih;
        getline(cin, pilih);
        cout << "\n";

        if (pilih == "1") {
            cout << "Saldo: Rp " << saldo << "\n\n";
        }

        else if (pilih == "2") {
            string tarik;
            long long nominal = -1;

            while (nominal <= 0) {
                cout << "Masukkan jumlah tarik tunai: ";
                getline(cin, tarik);

                bool angka = true;
                for (char c : tarik) {
                    if (!isdigit((unsigned char)c)) angka = false;
                }

                if (!angka || tarik == "") {
                    cout << "Input harus angka dan lebih dari 0!\n";
                } else {
                    nominal = stoll(tarik);
                }
            }

            if (nominal > saldo) {
                cout << "Saldo tidak cukup!\n\n";
            } else {
                saldo -= nominal;
                cout << "Saldo baru: Rp " << saldo << "\n\n";
            }
        }

        else if (pilih == "3") {
            string setor;
            long long nominal = -1;

            while (nominal <= 0) {
                cout << "Masukkan jumlah setor: ";
                getline(cin, setor);

                bool angka = true;
                for (char c : setor) {
                    if (!isdigit((unsigned char)c)) angka = false;
                }

                if (!angka || setor == "") {
                    cout << "Input harus angka dan lebih dari 0!\n";
                } else {
                    nominal = stoll(setor);
                }
            }

            saldo += nominal;
            cout << "Saldo baru: Rp " << saldo << "\n\n";
        }

        else if (pilih == "4") {
            string transfer;
            long long nominal = -1;

            while (nominal <= 0) {
                cout << "Masukkan nominal transfer: ";
                getline(cin, transfer);

                bool angka = true;
                for (char c : transfer) {
                    if (!isdigit((unsigned char)c)) angka = false;
                }

                if (!angka || transfer == "") {
                    cout << "Input harus angka dan lebih dari 0!\n";
                } else {
                    nominal = stoll(transfer);
                }
            }

            if (nominal > saldo) {
                cout << "Saldo tidak cukup!\n\n";
            } else {
                string rek;
                cout << "Masukkan nomor rekening tujuan: ";
                getline(cin, rek);

                saldo -= nominal;
                cout << "Transfer berhasil ke " << rek << "\n";
                cout << "Saldo baru: Rp " << saldo << "\n\n";
            }
        }

        else if (pilih == "5") {
            cout << "Terima kasih!\n";
            return 0;
        }

        else {
            cout << "Pilihan tidak valid!\n\n";
        }
    }
}

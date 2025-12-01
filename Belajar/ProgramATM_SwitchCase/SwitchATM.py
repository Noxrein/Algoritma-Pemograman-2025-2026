while True:
    nama = input("Masukkan nama anda: ")
    konfirmasi = ""

    while konfirmasi not in ["true", "false"]:
        konfirmasi = input("Apakah nama sudah benar? (true/false): ").lower()

    if konfirmasi == "true":
        break
    print("Silakan masukkan nama kembali.\n")

while True:
    nim = input("Masukkan NIM: ")
    if nim.isdigit():
        break
    print("NIM harus angka!\n")

saldo = int(nim)

print(f"\nNama: {nama}")
print(f"Saldo Awal: Rp {saldo:,}\n".replace(",", "."))

while True:
    print("===== MENU ATM =====")
    print("1. Cek Saldo")
    print("2. Tarik Tunai")
    print("3. Setor Tunai")
    print("4. Transfer")
    print("5. Keluar")

    pilih = input("Pilih menu (1-5): ")
    print()

    if pilih == "1":
        print(f"Saldo: Rp {saldo:,}\n".replace(",", "."))

    elif pilih == "2":
        tarik = input("Masukkan jumlah tarik tunai: ")
        if tarik.isdigit() and int(tarik) > 0 and int(tarik) <= saldo:
            saldo -= int(tarik)
            print(f"Saldo baru: Rp {saldo:,}\n".replace(",", "."))
        else:
            print("Input tidak valid atau saldo kurang!\n")

    elif pilih == "3":
        setor = input("Masukkan jumlah setor: ")
        if setor.isdigit() and int(setor) > 0:
            saldo += int(setor)
            print(f"Saldo baru: Rp {saldo:,}\n".replace(",", "."))
        else:
            print("Input tidak valid!\n")

    elif pilih == "4":
        transfer = input("Masukkan nominal transfer: ")
        if transfer.isdigit() and int(transfer) > 0 and int(transfer) <= saldo:
            rek = input("Masukkan nomor rekening tujuan: ")
            saldo -= int(transfer)
            print(f"Transfer berhasil ke {rek}")
            print(f"Saldo baru: Rp {saldo:,}\n".replace(",", "."))
        else:
            print("Input tidak valid atau saldo kurang!\n")

    elif pilih == "5":
        print("Terima kasih!")
        break

    else:
        print("Pilihan tidak valid!\n")

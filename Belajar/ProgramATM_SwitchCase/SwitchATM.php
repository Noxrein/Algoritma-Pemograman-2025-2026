<?php

while (true) {
    $nama = readline("Masukkan nama anda: ");

    $konfirmasi = "";
    while ($konfirmasi != "true" && $konfirmasi != "false") {
        $konfirmasi = strtolower(readline("Apakah nama sudah benar? (true/false): "));
    }

    if ($konfirmasi == "true") {
        break;
    }

    echo "Silakan masukkan nama kembali.\n";
}

$nimBenar = false;
while ($nimBenar == false) {
    $nim = readline("Masukkan NIM: ");

    if ($nim) {
        $nimBenar = true;
    } else {
        echo "NIM harus angka!\n";
    }
}

$saldo = (int)$nim;

echo "\nNama: $nama\n";
echo "Saldo Awal: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";

while (true) {
    echo "===== MENU ATM =====\n";
    echo "1. Cek Saldo\n";
    echo "2. Tarik Tunai\n";
    echo "3. Setor Tunai\n";
    echo "4. Transfer\n";
    echo "5. Keluar\n";

    $pilihan = readline("Pilih menu (1-5): ");
    echo "\n";

    switch ($pilihan) {

        case "1":
            echo "Saldo: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case "2":
            do {
                $tarik = readline("Masukkan jumlah tarik tunai: ");
                if (!is_numeric($tarik) || $tarik <= 0) {
                    echo "Input harus angka dan lebih dari 0!\n";
                    $tarik = null;
                }
            } while ($tarik === null);

            if ($tarik > $saldo) {
                echo "Saldo tidak cukup!\n\n";
            } else {
                $saldo -= $tarik;
                echo "Saldo baru: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            }
            break;

        case "3":
            do {
                $setor = readline("Masukkan jumlah setor tunai: ");
                if (!is_numeric($setor) || $setor <= 0) {
                    echo "Input harus angka dan lebih dari 0!\n";
                    $setor = null;
                }
            } while ($setor === null);

            $saldo += $setor;
            echo "Saldo baru: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            break;

        case "4":
            do {
                $transfer = readline("Masukkan nominal transfer: ");
                if (!is_numeric($transfer) || $transfer <= 0) {
                    echo "Input harus angka dan lebih dari 0!\n";
                    $transfer = null;
                }
            } while ($transfer === null);

            if ($transfer > $saldo) {
                echo "Saldo tidak cukup!\n\n";
            } else {
                $rek = readline("Masukkan nomor rekening tujuan: ");
                $saldo -= $transfer;
                echo "Transfer berhasil ke $rek\n";
                echo "Saldo baru: Rp " . number_format($saldo, 0, ',', '.') . "\n\n";
            }
            break;

        case "5":
            echo "Terima kasih!\n";
            exit();

        default:
            echo "Pilihan tidak valid!\n\n";
    }
}
?>
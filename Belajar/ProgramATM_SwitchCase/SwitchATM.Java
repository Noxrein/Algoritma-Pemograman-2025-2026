import java.util.Scanner;

public class ATM {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String nama;
        String konfirmasi;

        while (true) {
            System.out.print("Masukkan nama anda: ");
            nama = input.nextLine();

            konfirmasi = "";
            while (!konfirmasi.equals("true") && !konfirmasi.equals("false")) {
                System.out.print("Apakah nama sudah benar? (true/false): ");
                konfirmasi = input.nextLine().toLowerCase();
            }

            if (konfirmasi.equals("true")) {
                break;
            }

            System.out.println("Silakan masukkan nama kembali.");
        }

        String nim = "";
        boolean nimBenar = false;

        while (!nimBenar) {
            System.out.print("Masukkan NIM: ");
            nim = input.nextLine();
            if (!nim.equals("")) {
                nimBenar = true;
            } else {
                System.out.println("NIM harus angka!");
            }
        }

        long saldo = Long.parseLong(nim);

        System.out.println("\nNama: " + nama);
        System.out.println("Saldo Awal: Rp " + saldo + "\n");

        while (true) {
            System.out.println("===== MENU ATM =====");
            System.out.println("1. Cek Saldo");
            System.out.println("2. Tarik Tunai");
            System.out.println("3. Setor Tunai");
            System.out.println("4. Transfer");
            System.out.println("5. Keluar");
            System.out.print("Pilih menu (1-5): ");

            String pilih = input.nextLine();
            System.out.println();

            if (pilih.equals("1")) {
                System.out.println("Saldo: Rp " + saldo + "\n");
            }

            else if (pilih.equals("2")) {
                long nominal = -1;
                while (nominal <= 0) {
                    System.out.print("Masukkan jumlah tarik tunai: ");
                    String tarik = input.nextLine();
                    if (tarik.matches("\\d+")) {
                        nominal = Long.parseLong(tarik);
                    } else {
                        System.out.println("Input harus angka dan lebih dari 0!");
                    }
                }

                if (nominal > saldo) {
                    System.out.println("Saldo tidak cukup!\n");
                } else {
                    saldo -= nominal;
                    System.out.println("Saldo baru: Rp " + saldo + "\n");
                }
            }

            else if (pilih.equals("3")) {
                long nominal = -1;
                while (nominal <= 0) {
                    System.out.print("Masukkan jumlah setor tunai: ");
                    String setor = input.nextLine();
                    if (setor.matches("\\d+")) {
                        nominal = Long.parseLong(setor);
                    } else {
                        System.out.println("Input harus angka dan lebih dari 0!");
                    }
                }

                saldo += nominal;
                System.out.println("Saldo baru: Rp " + saldo + "\n");
            }

            else if (pilih.equals("4")) {
                long nominal = -1;
                while (nominal <= 0) {
                    System.out.print("Masukkan nominal transfer: ");
                    String transfer = input.nextLine();
                    if (transfer.matches("\\d+")) {
                        nominal = Long.parseLong(transfer);
                    } else {
                        System.out.println("Input harus angka dan lebih dari 0!");
                    }
                }

                if (nominal > saldo) {
                    System.out.println("Saldo tidak cukup!\n");
                } else {
                    System.out.print("Masukkan nomor rekening tujuan: ");
                    String rek = input.nextLine();
                    saldo -= nominal;
                    System.out.println("Transfer berhasil ke " + rek);
                    System.out.println("Saldo baru: Rp " + saldo + "\n");
                }
            }

            else if (pilih.equals("5")) {
                System.out.println("Terima kasih!");
                return;
            }

            else {
                System.out.println("Pilihan tidak valid!\n");
            }
        }
    }
}

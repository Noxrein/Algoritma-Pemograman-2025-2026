import java.util.Scanner;

public class NilaiAkhir {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        float tugas, uts, uas, nilaiAkhir;

        System.out.print("Masukkan nilai Tugas: ");
        tugas = input.nextFloat();

        System.out.print("Masukkan nilai UTS: ");
        uts = input.nextFloat();

        System.out.print("Masukkan nilai UAS: ");
        uas = input.nextFloat();

        nilaiAkhir = (0.3f * tugas) + (0.3f * uts) + (0.4f * uas);

        System.out.println("Nilai Akhir: " + nilaiAkhir);

        if (nilaiAkhir >= 60) {
            System.out.println("Status: Lulus");
        } else {
            System.out.println("Status: Tidak Lulus");
        }

        input.close();
    }
}

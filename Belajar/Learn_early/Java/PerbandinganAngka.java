import java.util.Scanner;

public class PerbandinganAngka {
    public static void main(String[] args) {
        @SuppressWarnings("resource")
        Scanner sc = new Scanner(System.in);
        System.out.print("Masukkan angka pertama: ");
        int a = sc.nextInt();
        System.out.print("Masukkan angka kedua: ");
        int b = sc.nextInt();

        if (a > b) {
            System.out.println(a + " lebih besar dari " + b);
        } else if (a < b) {
            System.out.println(a + " lebih kecil dari " + b);
        } else {
            System.out.println(a + " sama dengan " + b);
        }
    }
}
#include <stdio.h>
#include <string.h>

int main() 
{ 
    char nm1[50];  
    char nm2[50]; 

    printf("Masukan nama pertama = ");
    fgets(nm1, sizeof(nm1), stdin);
    nm1[strcspn(nm1, "\n")] = 0; // hapus newline

    printf("Masukan nama kedua = ");
    scanf("%49s", nm2);

    printf("\n\nSelamat Datang %s\n", nm1);
    printf("Selamat Datang %s\n", nm2);

    return 0;
}
#include <stdio.h>

int main(){
    printf("Hallo World\n");

    int a, b, hasil;

    printf("=== Program perkalian sederhana ===\n");
    printf("Input angka a : ");
    scanf("%d", &a);
    printf("Input angka b : ");
    scanf("%d", &b);

    hasil = a*b;
    printf("Hasil Kali = %d", hasil);


    return 0;
}
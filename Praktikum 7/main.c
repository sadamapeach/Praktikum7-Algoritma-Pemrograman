/*
Nama        : Oktaviana Sadama Nur Azizah
NIM         : 24060121130060
Deskripsi   : Membuat soal tentang searching, disini saya menggunakan BST
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Judul
    printf("Now we learn about Searching...");
    printf("\nBrief description:\n");
    printf("Mengecek apakah input yang dimasukkan ada di dalam array, jika ada maka akan menampilkan index input dalam array :)\n");
    printf("\nLet's try :p\n\n");

    // Kamus Lokal
    int arr[] = {11, 14, 107, 124, 244, 280, 831, 910, 1543, 7734, 584520};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;
    int x;

    // Algoritma
    printf("Masukkan nilai input: ");
    scanf("%d",&x);

    BinSearch(arr, n, x, &ix);
    (ix == -1)
        ? printf("Elemen tidak ditemukan :(\n")
        : printf("Elemen ditemukan di index ke-%d\n", ix);

    printf("\nSelamat anda selangkah lebih maju untuk mengenal searching ^o^\n");

    return 0;
}

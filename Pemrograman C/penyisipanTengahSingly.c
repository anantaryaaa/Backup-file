// PENYISIPAN SINGLE DI TENGAH

#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int angkaBaru, posisi, i, ukuran = sizeof(arr) / sizeof(arr[0]);

    printf("Deret angka saat ini : ");
    for (i = 0; i < ukuran; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n\nMasukkan posisi index yang akan disisipkan angka: ");
    scanf("%d", &posisi);
    printf("Masukkan angka baru yang akan disisipkan: ");
    scanf("%d", &angkaBaru);

    for (i = ukuran; i > posisi; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[posisi] = angkaBaru;

    printf("Deret angka saat ini: ");
    for (i = 0; i <= ukuran; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
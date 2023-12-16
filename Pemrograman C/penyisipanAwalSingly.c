// PENYISIPAN SINGLE DI AWAL

#include <stdio.h>

int main()
{
    int arr[] = {1, 3, 5, 7, 9};
    int angkaBaru, i, ukuran = sizeof(arr) / sizeof(arr[0]);

    printf("Deret angka saat ini : ");
    for (i = 0; i < ukuran; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\n\nMasukkan angka baru yang akan disisipkan pada awal deret angka: ");
    scanf("%d", &angkaBaru);

    for (i = ukuran; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = angkaBaru;

    printf("Deret angka saat ini: ");
    for (i = 0; i <= ukuran; i++)
    {
        printf("%d  ", arr[i]);
    }

    return 0;
}
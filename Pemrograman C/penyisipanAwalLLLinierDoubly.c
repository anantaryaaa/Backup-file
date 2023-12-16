#include <stdio.h>
int main()
{
    int arr[] = {8, 10, 3, 1, 7};
    int lokasi, angka, i, j, k;
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Baris angka awal: ");
    for (i = 0; i <= 4; i++)
    {
        printf("%d  ", arr[i]);
    }

    printf("\nMasukkan lokasi index untuk angka baru: ");
    scanf("%d", &lokasi);

    printf("Masukkan angka baru untuk baris angka baru: ");
    scanf("%d", &angka);

    // fix
    for (j = size; j > lokasi; j--)
    {
        arr[j] = arr[j - 1];
    }
    arr[lokasi] = angka;

    printf("Baris angka baru: ");
    for (k = 0; k <= 5; k++)
    {
        printf("%d  ", arr[k]);
    }

    printf("\nLink prev simpul baru: %d\n", lokasi - 1);
    printf("Link next simpul baru: %d\n", lokasi + 1);

    return 0;
}
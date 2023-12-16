#include <stdio.h>

int main()
{
    int a[] = {2, 3, 4, 5, 6}, i;

    printf("Angka berurut sekarang yaitu: ");
    for (i = 0; i <= 4; i++)
    {
        printf("%d  ", a[i]);
    }

    printf("\nSekarang kita akan menyisipkan angka 1 di depan!!\n");

    for (i = 5; i < 0; i--)
    {
        a[i - 1] = a[i];
    }
    a[0] = 1;

    printf("Angka berurut sekarang yaitu: ");
    for (i = 0; i <= 6; i++)
    {
        printf("%d  ", a[i]);
    }
}
#include <stdio.h>
#include <math.h>

float desimal1, desimal2;
int main()
{
    printf("Masukkan angka desimal untuk menghitung phytagoras: "); scanf("%f", &desimal1);
    printf("Masukkan angka desimal berikutnya untuk menghitung phytagoras: "); scanf("%f", &desimal2);

    float hasil = sqrt((desimal1*desimal1)+(desimal2*desimal2));

    printf("Hasil phytagoras = %.2f", hasil);

    return 0;
}
#include <stdio.h>

int main()
{
    int array1[4];
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    array1[3] = 4;
    array1[4] = 5;
    int array2;
    int i;

    printf("Keluarkan semua nilai array\n");
    for(int i=0; i<5; i++){
        printf("%d |", array1[i]);
    };

    printf("\nInputkan angka untuk dimasukkan dalam urutan array: ");
    scanf("%d ", &array2);

    printf("\nSekarang, angka pada deret tersebut adalah");
    for(i=5; i>0; i--){
        array1[i]=array1[i-1];
    }
    array1[i]=array2;
    for(i; i<=5; i++){
        printf("%d", array1[i]);
        printf("   ");
    }
}

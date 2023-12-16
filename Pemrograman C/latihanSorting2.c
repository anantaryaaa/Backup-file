#include <stdio.h>

int main()
{
    int length;
    printf("Masukkan nilai index : "); scanf("%d", &length);

    int nilai[length];
    int temp;

    for(int b = 0; b < length; b++){
        printf("Masukkan angka ke index-%d: ", b); scanf("%d", &nilai[b]);
    }

    for(int a = 1; a < length; a++){
        for(int b = 0; b < length-a; b++){
            if(nilai[b] > nilai[b+1]){
                temp = nilai[b];
                nilai[b]= nilai[b+1];
                nilai[b+1]= temp;
            }
        }
        /**or(int c = 0; c < length; c++){
            printf("%d | ", nilai[c]);
        }
        printf("\n");**/
    }
    printf("Hasil sorting : \n");
    for(int x = 0; x < length; x++){
        printf("%d \n", nilai[x]);
    }
}

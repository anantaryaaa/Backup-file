#include <stdio.h>

int main()
{
    int nilai[] = {10, 2, 9, 1, 8, 4, 7, 3, 6, 5};
    int length = sizeof(nilai)/sizeof(*nilai);
    int temp;

    for(int a = 1; a < length; a++){
        for(int b = 0; b < length-a; b++){
            if(nilai[b] > nilai[b+1]){
                temp = nilai[b];
                nilai[b]= nilai[b+1];
                nilai[b+1]= temp;
            }
        }
        for(int c = 0; c < length; c++){
            printf("%d | ", nilai[c]);
        }
        printf("\n");
    }
    printf("Hasil sorting : \n");
    for(int x = 0; x < length; x++){
        printf("%d \n", nilai[x]);
    }
}

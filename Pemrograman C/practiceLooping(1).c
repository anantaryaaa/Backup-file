#include <stdio.h>

int main()
{

    //looping dibawah diinisialisasi dari angka 0, dan dibatasi hingga angka 100. Setiap looping melihat batasannya dan 
    //masih bernilai true, maka looping akan menambah inisialisasi dengan angka 1 hingga batas bernilai false
    for(int i = 0; i < 100; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
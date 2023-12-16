#include <stdio.h>
#include <windows.h>

int max[7], stack, pop, pilihan_data, pilihan_user, size = sizeof(max)/sizeof(max[0]),i;
char c[5]={'E', 'D', 'C', 'B', 'A'};

void gotoxy(int x, int y)
{
    // Input
    COORD c;
    c.X = x;
    c.Y = y;

    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

int main()
{
    printf("PROGRAM STACK DATA\n");
    printf("=======================\n");

    printf("Stack           Push Data\n");

    for(i=6; i>=0; i--)
    {
        printf("%d\n", i);        
    }

    gotoxy(20,7);
    printf("%c\n",c[0]);

    gotoxy(20,8);
    printf("%c\n",c[1]);
    
    gotoxy(20,9);
    printf("%c\n",c[2]);

    gotoxy(20,10);
    printf("%c\n",c[3]);

    gotoxy(20,11);
    printf("%c\n",c[4]);

    printf("\nTentukan data mana yang akan dikeluarkan: ");
    scanf("%d", &pilihan_user);

    system
    if (pilihan_user=='E'){

    }
}
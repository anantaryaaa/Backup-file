#include <stdio.h>
#include <windows.h>
#include <unistd.h>

// Global variabel
int queArr[8], F = NULL, R = NULL;

void gotoxy(int x, int y)
{
    COORD posisi = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), posisi);
}

void displayQueue(int front, int rear)
{
    int size = sizeof(queArr)/sizeof(queArr[0]);

    puts("   CIRCULAR QUEUE");
    gotoxy(0, 1);
    printf("i");
    gotoxy(0, 2);
    printf("Q");

    // Cetak index
    gotoxy(3, 1);
    for(int i = 0; i < size; i++)
    {
        printf("%d ", i);
    }

    // Cetak queue
    gotoxy(3, 2);
    if(front != 0 ||rear != 0)
    {
        for(int n = 0; n < size; n++)
        {
            printf("%d ", queArr[n]);
        }
    }
    gotoxy(0, 4);
}

int main()
{
    // Lokal Variabel
    int pilihan, daCount = 0;

queue:
    system("cls");
    system("color F");
    fflush(stdin);

    displayQueue(F, R);

    // Kondisi Front, Rear
    if(F == 0 && R == 0)
    {
        F = F - 1, R = R - 1;
    }
    else if(F == 8 && R == 7)
    {
        F = -1, R = -1;
    }
    else if(F <= 0 && R == 0)
    {
        F = F + 1;
    }
    else if(F == 8)
    {
        F = 0;
    }
    else if(R == 8)
    {
        R = -1;
    }
    printf("F = %d, R = %d", F, R);


    // Menu
    puts("\n\nPILIHAN:");
    puts("1) TAMBAH DATA");
    puts("2) HAPUS DATA");
    puts("3) EXIT");
    puts("----------------");
    printf("PILIHAN: ");
    scanf("%d", &pilihan);

    switch(pilihan)
    {
    case 1:
        if(R == 7 && F == 0 )
        {
            puts("\nData Sudah penuh!");
            system("color 4");
            Sleep(1000);
        }
        else if(F - 1 == R)
        {
            puts("\nData Sudah penuh!");
            system("color 4");
            Sleep(1000);
        }
        else if(R < 7)
        {
            printf("INPUT DATA: ");
            scanf("%d", &queArr[R + 1]);
            R++;
        }

        else if(R == 7)
        {
            printf("INPUT DATA: ");
            R = 0;
            scanf("%d", &queArr[R]);
            daCount++;
        }
        goto queue;
    case 2:
        if(F < 0 && R < 0)
        {
            system("color 4");
            puts("\nTidak ada data yang dapat dihapus! Silahkan tambah data!");
            Sleep(1000);
        }
        else if(F <= 7 && R <= 7)
        {
            queArr[F] = 0;
            F++;
        }

        goto queue;
    case 3:
        system("color 6");
        puts("\nProgram Selesai!");
        Sleep(2000);
        return 0;
    default:
        puts("\nPilihan hanya 1, 2, atau 3!");
        system("color 4");
        Sleep(1000);
        goto queue;
    }
}

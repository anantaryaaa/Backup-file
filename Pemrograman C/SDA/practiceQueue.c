#include <stdio.h>
#include <windows.h>

int in, qu[4], fr = -1, re = -1, pil;
int main()
{

  int ukuran = sizeof(qu)/sizeof(qu[0]);
  
  ulang:
    printf("PROGRAM LINEAR QUEUE\n");
    printf("--------------------------\n");

    printf("i "); 
    for(int i=0; i<ukuran; i++)
    {
      printf("%d ", i);
    }
    printf("\nq "); 
    for(int i=0; i<ukuran; i++)
    {
      printf("%d ", qu[i]);
    }

    printf("\nF=%d, R=%d\n\n", fr, re);

    printf("Pilihan: \n");
    printf("1) Tambah data\n");
    printf("2) Hapus data\n");
    printf("3) keluar\n");
    printf("--------------------------\n");
    scanf("%d", &pil); 

    if(pil==1)
    {
      if(fr<0 && re<0)
      {
        fr=re=re+1;
      }
      else
      {
        re = re+1;
      }
      printf("Masukkan nilai untuk antrian: ");
      scanf("%d", &qu[re]);
      goto ulang;

      // fungsi 2 if dibawah masih tidak berfungsi
      if(re==3)
      {
        printf("Antrian dalam keadaan PENUH, PENYISIPAN DITOLAK!!");
        getchar();
        getchar();
      }

      if(re==ukuran-1)
      {
        printf("Antrian dalam keadaan PENUH, PENYISIPAN DITOLAK!!");
        goto ulang;
      }
    }
    else if(pil==2)
    {
      if(fr<0 && re<0)
      {
        printf("Antrian masih kosong, tidak bisa melakukan penghapusan. ");
        goto ulang;
      }

      // disini kita memproses qu dengan array index fr yang akan kita beri nilai 0 karena akan dihapus dan nilai fr di decrement
      qu[fr]=0;
      fr=fr+1;

      if(fr>re)
      {
        fr =-1;
        re =-1;
        goto ulang;
      }
      else
      {
        goto ulang;
      }
    }
    else
    {
      printf("\n\n");
      return 0;
    }
}
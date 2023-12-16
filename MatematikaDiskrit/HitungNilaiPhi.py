k = -1   # Variabel yang menyimpan tanda negatif awal
suku = 1   # Variabel yang menyimpan suku awal
d = -1   # Variabel yang digunakan untuk menghitung penyebut
pi_s = 1   # Variabel yang akan menyimpan perkiraan π

for i in range(1,1000):
    k *= -1  # Mengubah tanda (bergantian negatif dan positif)
    d += 2   # Menambahkan 2 ke penyebut
    suku = k/d   # Menghitung suku berikutnya
    pi_s += suku   # Menambahkan suku ke perkiraan π
    pi = 4 * pi_s   # Menghitung perkiraan π dengan faktor 4

    print(pi_s)   # Mencetak perkiraan π setiap langkah
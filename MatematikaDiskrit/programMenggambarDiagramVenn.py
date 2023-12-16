#PROGRAM UNTUK MENGGAMBAR DIAGRAM VENN
print("\033c")       #To close all
import numpy as np
import matplotlib.pyplot as plt

#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#+++++++++++++++++++++++             USER ENTRIES            +++++++++++++++++++++++++
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
bg_color = [255, 209, 63]                                               #Warna latar
dA = 0.4                  #Diameter of A, relatif terhadap ukuran gambar, maximum 0.45
A_color = [80, 61, 0]                                            #Warna lingkaran A
dB = 0.4                  #Diameter of B, relatif terhadap ukuran gambar, maximum 0.45
B_color = [80, 61, 0]                                             #Warna lingkaran B
dC = 0.4                  #Diameter of C, relatif terhadap ukuran gambar, maximum 0.45
C_color = [80, 61, 0]                                             #Warna lingkaran C
tebal_outline = round(4)
warna_outline = [0, 0, 0]
intersection = "ya"
tambah_lingkaran_C = "ya"

#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#+++++++++++++++++++++++++++        SET THE CONSTANT         +++++++++++++++++++++++++
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
row, col = int(1000), int(1000)

#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#+++++++++++++++++++++++++++           PREPARATION           +++++++++++++++++++++++++
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
setengah_tebal_outline = round(tebal_outline/2)

#Radii of A, B, and C
rA = round(dA/2*row)
rB = round(dB/2*row)
rC = round(dB/2*row)

#Center of A, B, and C
ya = round(row/2)
yb = round(row/2)

#Jika ada tambahan lingkaran C maka koordinat y bergeser
if tambah_lingkaran_C == "ya" and intersection == "ya":
    ya = round(row/2 - rA/2)
    yb = ya
    yc = round(row/2 + rA/2)

if tambah_lingkaran_C == "ya" and intersection == "tidak":
    ya = round(row/2 - rA*1.2)
    yb = ya
    yc = round(row/2 + rA*1.2)

#Jika intersection ==True, dekatkan titik pusat kedua lingkaran.
#Jika intersection ==False, jauhkan titik pusat kedua lingkaran.

mins = min(dA, dB)
if intersection == "ya":
    xa = round(col/2 - rA/2)
    xb = round(col/2 + rA/2)
    xc = round(col/2)

if intersection == "tidak":
    xa = round(col/2 - rA*1.2)
    xb = round(col/2 + rB*1.2)
    xc = round(col/2)

#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#+++++++++++++++++++     FUNCTION UNTUK MEMBUAT LINGKARAN          +++++++++++++++++++
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
def create_lingkaran(Gambar, y, x, r, warna_isi, tebal_outline, warna_outline ):
    for i in range(y - r - tebal_outline, y + r + tebal_outline):
        for j in range(x - r - tebal_outline, x + r + tebal_outline):
            if abs(((i - y) ** 2 + (j - x) ** 2)**0.5 - r) <= setengah_tebal_outline:
                Gambar[i, j, 0:3] = warna_outline
            if abs(Gambar[i,j,0] - bg_color[0]) < 1 and \
               abs(Gambar[i,j,1] - bg_color[1]) < 1 and \
               abs(Gambar[i,j,2] - bg_color[2]) < 1:
                digambar = "belum"
            else:
                digambar = "sudah"
            #Jika sudah ada lingkaran atau outline jangan ditimpa.
            if (i - y) ** 2 + (j - x) ** 2 < r ** 2 and digambar == "belum":
                Gambar[i, j, 0:3] = warna_isi
    return Gambar

#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
#++++++++++++++++++++++           MAIN PROGRAM          ++++++++++++++++++++++++
#+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
print('col, row =', col, ',', row)

# Preparing the background (universe)
Gambar = np.zeros(shape=(row, col, 3), dtype=np.uint8)
Gambar[:, :, :] = bg_color

hasil1 = create_lingkaran(Gambar, ya, xa, rA, A_color, tebal_outline, warna_outline)
hasil2 = create_lingkaran(hasil1, yb, xb, rB, B_color, tebal_outline, warna_outline)
plt.figure()
plt.imshow(hasil2)

if tambah_lingkaran_C == "ya":
    hasil3 = create_lingkaran(hasil2, yc, xc, rC, C_color, tebal_outline, warna_outline)
    plt.imshow(hasil3)

plt.show()
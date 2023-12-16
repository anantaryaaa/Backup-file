angkaMagic = 5
percobaan = 0 
batas = 5

print("AYO MAIN TEBAK ANGKA....")
print("--------------------------")

blank = input("")

while percobaan < batas: 
    uI = input("Masukkan angka tebakan mu: ")
    uI = int(uI)

    if (uI == angkaMagic):
        print("SELAMAT! Kamu berhasil menebak angka yang disembunyikan")
        break
    elif(percobaan <= batas):
        print("Coba lagi yuk")
    else:
        print("Batas percobaan mu habis")

    percobaan = percobaan + 1
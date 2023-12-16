import os

nama_1 = input("Masukkan nama kamu: ")
nilai_1 = input("Masukkan hasil ujian terbaru kamu: ")
pesan_1 = f"Halo {nama_1} kamu memiliki nilai {nilai_1}"
print(pesan_1)
blank_1 = input("")

os.system('cls')

nama_2 = input("Masukkan nama kamu: ")
nilai_2 = input("Masukkan hasil ujian terbaru kamu: ")
pesan_2 = f"Halo {nama_2} kamu memiliki nilai {nilai_2}"
print(pesan_2)
blank_2 = input("")

os.system('cls')

pesan_3 = f"Mari kita bandingkan nilai {nama_1} dan {nama_2}"
print(pesan_3)
print(nama_1 + " memiliki nilai " + str(nilai_1))
print(nama_2 + " memiliki nilai " + str(nilai_2))


if (nilai_1 == nilai_2):
    print("Cie nilai kalian sama...")

elif(nilai_1<nilai_2):
    pesan_4 = f"Wah {nama_1} hebat ya"
    print(pesan_4)
else:
    pesan_5 = f"wah {nama_2} hebat ya"
    print(pesan_5)
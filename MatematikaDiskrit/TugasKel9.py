# Menghitung jumlah kemungkinan PIN
total_possibilities = 10 * 9 * 8 * 7 #ini ananta

print(f"Ada {total_possibilities} kemungkinan PIN 4 digit yang berbeda.")

# Membuat daftar untuk menyimpan semua kombinasi yang valid
valid_pins = [] 

# Melakukan perulangan untuk mencari semua kombinasi
# ini gisna dan willy
for d1 in range(0,10):
    for d2 in range(0,10):
        if d2 != d1:
            for d3 in range(0,10):
                if d3 != d1 and d3 != d2:
                    for d4 in range(0,10):
                        if d4 != d1 and d4 != d2 and d4 != d3:
                            pin = f"{d1}{d2}{d3}{d4}" #ini indah
                            valid_pins.append(pin)  #ini irvan

# Menampilkan beberapa kombinasi pertama

for i in range(1,len(valid_pins)+1):
    print("Pin nomor ke-",i, "[", valid_pins[i-1], "]") #ini fahmi 

# Menampilkan total kombinasi yang telah dihasilkan
print(f"Jumlah PIN yang mungkin: {len(valid_pins)}") #ini bayu 
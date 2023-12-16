# # latihan formated string
# bedanya fungsi dengan method
# |-> fungsi tidak ada yang memanggil jadi langsung aja tulis fungsinya.
# |-> method perlu dipanggil dengan (.) karena dia ada dalam sesuatu

umur = 19
nama = 'ananta'
pesan = f"nama saya {nama} dan umur saya {umur}"

panjang = len(pesan)

print(pesan)
print(panjang)

# method yang ada untuk case (upper, lower, replace, dll)
print(pesan.upper())
print(pesan.lower())
print(pesan.replace("umur", "jumlah"))

angka = 10.9
angka = round(angka)
print(angka)

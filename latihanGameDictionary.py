angka = input("Masukkan angka: ")

peta_angka = {
    '1':'satu', 
    '2':'dua',
    '3':'tiga',
    '4':'empat',
    '5':'lima',
    '6':'enam',
    '7':'tujuh',
    '8':'delapan',
    '9':'sembilan'
}

output = ""

for n in angka:
    output2 = peta_angka.get(n, 'ngga ada')
    output = output + output2 + ' '

print(output)
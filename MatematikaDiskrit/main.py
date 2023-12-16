n = int(input('masukkan angka: '))

def BilanganEuler(inputan):
    faktorial1 = inputan*(n-1)
    for i in range(2,inputan+1):
        faktorial2 = (inputan-i)*(inputan-i+1)
        faktorial1+=faktorial2
        euler1 = 1 + (1/1)
        for i in range(2,inputan+1):
            euler1 += (1/faktorial1)
    print(euler1)

BilanganEuler(n)

# masih salah
perintah = ""

while perintah != "exit":
    perintah = input("Masukkan operasi hitungan: ")

    if perintah == 'exit':
        break

    if perintah!='+' and perintah!='-' and perintah!='*' and perintah!='/':
        print("Maaf operasi hitungan tidak dikenal. Silahkan ulangi")
        continue

    a = int(input("Masukkan angka untuk dioperasikan: "))
    b = int(input("Masukkan angka berikutnya untuk dioperasikan: "))

    if perintah=='+':
        hasil = a + b
    elif perintah=='-':
        hasil = a - b
    elif perintah=='*':
        hasil = a * b
    elif perintah=='/':
        hasil = a / b
        
    print(f"Hasil perhitungan = {hasil}")
    

print("Terimakasih sudah bermain hitung-hitungan :)")
nama_nama_orang = ['ananta', 'alfian', 'aurel', 'aqila']
print(nama_nama_orang)

# metode dalam list ada beberapa
# - append
nama_nama_orang.append('julyan')
print(nama_nama_orang)

# - extend
orang_berikutnya = ['fahridki', 'abdee']
nama_nama_orang.extend(orang_berikutnya)
print(nama_nama_orang)

# - insert
nama_nama_orang.insert(3, 'ipul')
print(nama_nama_orang)

# - remove
nama_nama_orang.remove('aqila')
print(nama_nama_orang)

# - pop
index = 4
nama_yang_dihapus = nama_nama_orang.pop(index)
print(nama_nama_orang)
print(nama_yang_dihapus)

# - clear
nama_nama_orang.clear()
print(nama_nama_orang)
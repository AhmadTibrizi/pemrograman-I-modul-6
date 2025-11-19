baris, kolom = input().split()
baris, kolom = int(baris), int(kolom)
array = input().split()

for i in range(baris):
    awal = i * kolom
    akhir = awal + kolom
    baris_sekarang = array[awal : akhir]
    print (" ".join(baris_sekarang))
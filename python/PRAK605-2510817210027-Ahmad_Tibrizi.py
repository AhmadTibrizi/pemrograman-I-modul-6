ordo = int(input())
matriks_a = []
print("Matriks A")
for i in range(ordo):
    matriks_a.append(list(map(int, input().split())))

matriks_b = []
print("Matriks B")
for x in range(ordo):
    matriks_b.append(list(map(int, input().split())))

print("Matriks AXB")
for i in range(ordo):
    baris_hasil = []
    for j in range(ordo):
        total = 0
        for k in range(ordo):
            total += matriks_a[i][k] * matriks_b[k][j]
        baris_hasil.append(total)
    print(*baris_hasil)
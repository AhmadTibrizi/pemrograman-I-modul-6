ruangan = int(input())
zetsu = input().split()
for i in range(1, ruangan+1):
    zetsu_putih = int(zetsu[i-1])
    print(i*zetsu_putih, end=" ")
print()
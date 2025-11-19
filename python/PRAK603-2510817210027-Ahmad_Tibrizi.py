n1, n2 = input().split()
if n1 != n2:
    print("Jumlah Tidak Sama")
else:
    arr1 = input().split(" ")
    arr2 = input().split(" ")
    for i, x in zip(arr1, arr2):
        i, x = int(i), int(x)
        print(i*x, end=" ")
print()
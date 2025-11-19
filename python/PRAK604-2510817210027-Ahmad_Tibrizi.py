kode = input()
pesan = input()
if len(kode) != len(pesan):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    temp = ""
    for i, x in zip(kode, pesan):
        if i == x and i != " ":
            temp+="*"
        elif i == x and i == " ":
            temp+=" "
        else:
            temp+="#"
    print(temp)
    bintang = temp.count("*")
    pagar = temp.count("#")
    print(f"* = {bintang}")
    print(f"# = {pagar}")
    if bintang > pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
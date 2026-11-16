kalimat1 = input()
kalimat2 = input()

if len(kalimat1) != len(kalimat2):
    print("Panjang kalimat berbeda, pesan palsu")
else:
    hasil = []
    bintang = 0
    pagar = 0

    for i in range(len(kalimat1)):
        if kalimat1[i] == " " and kalimat2[i] == " ":
            hasil.append(" ")
        elif kalimat1[i] == kalimat2[i]:
            hasil.append("*")
            bintang += 1
        else:
            hasil.append("#")
            pagar += 1

    for simbol in hasil:
        print(simbol, end="")

    print()

    print("* =", bintang)
    print("# =", pagar)

    if bintang > pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
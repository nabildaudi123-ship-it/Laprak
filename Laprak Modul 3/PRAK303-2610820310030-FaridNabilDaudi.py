jumlah = int(input("Masukan berapa bilangan yang ingin dimasukkan: "))

for i in range(1, jumlah + 1):
    angka = int(input(f"Masukkan bilangan ke-{i}: "))

    if angka > 0:
        print("positif")
    elif angka < 0:
        print("negatif")
    else:
        print("nol")
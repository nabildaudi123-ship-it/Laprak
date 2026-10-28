jumlah = int(input("Jumlah yang ingin diurutkan: "))

for i in range(1, jumlah + 1):
    print(f"\nPengurutan ke-{i}")
    batas = int(input())

    for angka in range(1, batas + 1):
        if angka % 2 != 0:
            print(angka, end=" ")

    print()


    for angka in range(batas, 1, -1):
        if angka % 2 == 0:
            print(angka, end=" ")

    print()
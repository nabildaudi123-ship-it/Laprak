jumlah = int(input("Jumlah yang ingin diurutkan: "))

for i in range(1, jumlah + 1):
    print(f"\nPengurutan ke-{i}")
    kelipatan = int(input("Masukkan kelipatan: "))
    simbol = input("Masukkan simbol: ").strip()

    if kelipatan <= 0:
        print("Kelipatan harus lebih dari 0")
    else:
        for angka in range(1, 51):
            if angka % kelipatan == 0:
                print(simbol, end=" ")
            else:
                print(angka, end=" ")
        print()
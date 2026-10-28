jumlah = int(input("Jumlah yang ingin diurutkan: "))

for i in range(1, jumlah + 1):
    print(f"\nPengurutan ke-{i}")
    pertama, kedua = map(int, input().split())

    if pertama < kedua:
        langkah = 1
        jumlah = kedua - pertama
    else:
        langkah = -1
        jumlah = pertama - kedua

    for i in range(jumlah + 1):
        if i > 0:
            print(" - ", end="")

        print(pertama, kedua, end="")

        pertama += langkah
        kedua -= langkah

    print()
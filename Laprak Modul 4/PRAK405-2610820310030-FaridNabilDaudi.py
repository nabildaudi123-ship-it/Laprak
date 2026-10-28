jumlah = int(input("Jumlah yang ingin diurutkan: "))

for i in range(1, jumlah + 1):
    print(f"\nPengurutan ke-{i}")
    a, b = map(int, input().split())

    total = 0
    for k in range(1, a + 1):
        hasil = 0
        for j in range(k, 0, -1):
            print(f"({j} * {b})", end="")
            if j > 1:
                print(" + ", end="")
            hasil += j * b
        print(f" = {hasil}")
        total += hasil

    print(total)
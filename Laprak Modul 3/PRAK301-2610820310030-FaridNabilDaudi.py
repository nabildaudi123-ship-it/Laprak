jumlah = int(input("Jumlah yang ingin diurutkan: "))

for i in range(1, jumlah + 1):
    print(f"\nPengurutan ke-{i}")
    a, b, c = map(int, input().split())

    if a > b:
        a, b = b, a

    if a > c:
        a, c = c, a

    if b > c:
        b, c = c, b

    print("Hasil pengurutan:", a, b, c)
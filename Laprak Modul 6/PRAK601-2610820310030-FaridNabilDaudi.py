baris, kolom = map(int, input().split())
angka = list(map(int, input().split()))

matriks = []
indeks = 0

for i in range(baris):
    baris_baru = []

    for j in range(kolom):
        baris_baru.append(angka[indeks])
        indeks += 1

    matriks.append(baris_baru)

for i in range(baris):
    print(*matriks[i])
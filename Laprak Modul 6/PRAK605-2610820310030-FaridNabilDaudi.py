def baca_matriks(n):
    angka = []

    while len(angka) < n * n:
        angka.extend(map(int, input().split()))

    matriks = []

    for i in range(n):
        baris = angka[i * n:(i + 1) * n]
        matriks.append(baris)

    return matriks


n = int(input())

print("Matriks A")
A = baca_matriks(n)

print("Matriks B")
B = baca_matriks(n)

hasil = []

for i in range(n):
    hasil.append([0] * n)

for i in range(n):
    for j in range(n):
        for k in range(n):
            hasil[i][j] += A[i][k] * B[k][j]

print("Matriks AXB")
for i in range(n):
    print(*hasil[i])
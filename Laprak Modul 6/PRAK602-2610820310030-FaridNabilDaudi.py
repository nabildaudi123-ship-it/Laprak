jumlah_ruangan = int(input())
zetsu = list(map(int, input().split()))

hasil = []

for i in range(jumlah_ruangan):
    hasil.append(zetsu[i] * (i + 1))

print(*hasil)
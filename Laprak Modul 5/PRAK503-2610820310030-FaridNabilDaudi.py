def maksimal(a, b):
    return a if a > b else b

def minimal(a, b):
    return a if a < b else b


n = int(input())
bilangan = list(map(int, input().split()))

maks = bilangan[0]
minim = bilangan[0]

for i in range(1, n):
    maks = maksimal(maks, bilangan[i])
    minim = minimal(minim, bilangan[i])

print(maks, minim)
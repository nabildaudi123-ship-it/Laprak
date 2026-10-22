jumlah = int(input("Berapa nilai yang ingin dikonversi? "))

for i in range(1, jumlah + 1):
    nilai = int(input(f"Masukkan nilai ke-{i}: "))

    if nilai >= 80:
        huruf = "A"
    elif nilai >= 70:
        huruf = "B"
    elif nilai >= 60:
        huruf = "C"
    elif nilai >= 50:
        huruf = "D"
    else:
        huruf = "E"

    print("Hasil:", huruf)
jumlah = int(input("Jumlah yang ingin dikonversi: "))

for i in range(1, jumlah + 1):
    total = int(input(f"Masukkan jumlah detik ke-{i}: "))

    hari = total // 86400
    jam = (total % 86400) // 3600
    menit = (total % 3600) // 60
    detik = total % 60

    if hari > 0:
        print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")
    else:
        print(f"{jam:02d}:{menit:02d}:{detik:02d}")
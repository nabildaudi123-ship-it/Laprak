jumlah = int(input("Jumlah bilangan: "))

for i in range(1, jumlah + 1):
    a = int(input(f"Masukkan bilangan ke-{i}: "))

    if a == 0 :
        print("Nol")
    elif a < 0:
        print("Satuan")
    elif a < 10:
        print("Satuan")
    elif a == 10:
        print("Puluhan")
    elif 11 <= a <= 19:
        print("Belasan")
    elif 20 <= a <= 99:
        print("Puluhan")
    else:
        print("Anda Menginput Melebihi Limit Bilangan")
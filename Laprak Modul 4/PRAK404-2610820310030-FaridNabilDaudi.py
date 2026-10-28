while True:
    print("Pilih program")
    print("1. Penjumlahan")
    print("2. Pengurangan")
    print("3. Perkalian")
    print("4. Pembagian")
    print("5. Exit")
    pilihan = input("Masukkan Pilihan : ").strip()

    if pilihan == "5":
        print("Terimakasih, telah menggunakan kalkulator FARID NABIL DAUDI")
        break

    if pilihan not in ("1", "2", "3", "4"):
        print("Input anda salah, silahkan coba lagi\n")
        continue

    a = float(input("Masukkan nilai pertama : "))
    b = float(input("Masukkan nilai kedua : "))

    if pilihan == "1":
        nama, hasil = "penjumlahan", a + b
    elif pilihan == "2":
        nama, hasil = "pengurangan", a - b
    elif pilihan == "3":
        nama, hasil = "perkalian", a * b
    else:
        if b == 0:
            print("Pembagian dengan nol tidak bisa dilakukan\n")
            continue
        nama, hasil = "pembagian", a / b

    print(f"Hasil {nama} antara {a:.2f} dengan {b:.2f} adalah {hasil:.2f}")
    print()
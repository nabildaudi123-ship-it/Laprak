harga_a = 400000
harga_b = 350000
diskon_a = 13
diskon_b = 21

hasil_a = harga_a - (harga_a * diskon_a // 100)
hasil_b = harga_b - (harga_b * diskon_b // 100)

print("Harga sepatu A adalah", harga_a)
print("Harga sepatu B adalah", harga_b)
print(f"Sepatu A mendapat diskon {diskon_a}% sehingga harganya menjadi {hasil_a}")
print(f"Sepatu B mendapat diskon {diskon_b}% sehingga harganya menjadi {hasil_b}")
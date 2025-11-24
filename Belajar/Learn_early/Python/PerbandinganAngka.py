a = float(input("Masukkan angka pertama: "))
b = float(input("Masukkan angka kedua: "))

if a > b:
    print(a, "lebih besar dari", b)
elif a < b:
    print(a, "lebih kecil dari", b)
else:
    print("keduanya sama besar")

print("Apakah keduanya sama?", a == b )

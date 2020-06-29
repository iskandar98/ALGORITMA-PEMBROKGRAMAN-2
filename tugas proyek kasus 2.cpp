# Python v3.7

limit = int(input('Input Limit : ')) # Batas Data
karyawan = {} # Deklarasi Dictionary

def Line():
    print('========================================')

# Function Kalkulasi Gaji
def Salary(par1,par2):
    if par1 == 1:
        if par2 > 40:
            return int(par2 * 3000 * 1.5)
        else:
            return par2 * 3000
    elif par1 == 2:
        if par2 > 40:
            return int(par2 * 3500 * 1.5)
        else:
            return par2 * 3500
    elif par1 == 3:
        if par2 > 40:
            return int(par2 * 4000 * 1.5)
        else:
            return par2 * 4000
    elif par1 == 4:
        if par2 > 40:
            return int(par2 * 5000 * 1.5)
        else:
            return par2 * 5000

# Loop Input
for x in range(limit):
    Line()
    print('data ke-'+ str(x+1))
    NIK = input('Masukkan NIK : ')
    Name = input('Masukkan Nama : ')
    Gol = input('Masukkan Golongan : ')
    JamKerja = input('Masukkan Jam Kerja : ')
    karyawan[NIK] = [Name,Gol,JamKerja]
    Line()

# Output Seluruh Data Yang Telah Dimasukkan
Line()
print('jumlah data yang tersimpan : ' + str(len(karyawan)))
print('Data yang tersimpan : ')
for x in karyawan:
    print('NIK : ' + x + ' Nama : ' + karyawan[x][0] + ' Golongan : ' + karyawan[x][1] + ' Jam Kerja : ' + karyawan[x][2])
Line()

flag = 1 # Deklarasi Check

while flag == 1:
    item = input('Masukkan NIK Yang Akan Ditampilkan : ')
    # Output Data Terpilih
    for key in karyawan.keys() :
        if key == item :
            gaji = Salary(int(karyawan[key][1]), int(karyawan[key][2]))
            Line()
            print('Nama : ' + karyawan[key][0])
            print('Golongan : ' + karyawan[key][1])
            print('Jam kerja : ' + karyawan[key][2])
            print('Gaji : Rp.' + str(gaji))
            Line()
        else:
            print('Data tidak ditemukan')
            Line()
    # Check Option
    flag = int(input('apakah anda ingin menampilkan data lain ? \n1.Iya\n2.Tidak\n>>'))
    Line()
    if flag != 1:
        break

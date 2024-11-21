#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f, hrga, jmlh, kode, diskon, byr, kembali, hasil, total;
    int pilihan, jumlah, bayar, date;
    char lagi;

awal:
    cout << "=================================================" << endl;
    cout << "                        TOKO KOMPUTAMA            " << endl;
    cout << "=================================================" << endl;

    cout << "\nNAMA PAKAIAN HARGA\n";
    cout << "1. KEMEJA PRIA PENDEK Rp.45000\n";
    cout << "2. KEMEJA BATIK Rp.66000\n";
    cout << "3. PAKAIAN GAMIS Rp.82000\n";
    cout << "4. CELENA JEANS Rp.70000\n";
    cout << "5. BUSANA MUSLIM Rp.87000\n";
    cout << "6. SARUNG Rp.35000\n";

    cout << "\nMasukan pilihan Anda : ";
    cin >> kode;

    // Rumus
    if (kode == 1)
    {
        cout << "Anda Membeli Kemeja Pria Pendek Rp.45000\n";
        a = 45000;

        cout << "Masukan Jumlah : ";
        cin >> jmlh;

        hrga = a * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode == 2)
    {
        cout << "Anda Membeli Kemeja Batik Rp.66000\n";
        b = 66000;
        cout << "Masukan Jumlah : ";
        cin >> jmlh;
        cout << "----------------------------------------\n";
        hrga = b * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode == 3)
    {
        cout << "Anda Membeli Pakaian Gamis Rp.82000\n";
        c = 82000;
        cout << "Masukan Jumlah : ";
        cin >> jmlh;
        cout << "----------------------------------------\n";
        hrga = c * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode == 4)
    {
        cout << "Anda Membeli Celena Jeans Rp.70000\n";
        d = 70000;
        cout << "Masukan Jumlah : ";
        cin >> jmlh;
        cout << "----------------------------------------\n";
        hrga = d * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode == 5)
    {
        cout << "Anda Membeli Busana Muslim Rp.87000\n";
        e = 87000;
        cout << "Masukan Jumlah : ";
        cin >> jmlh;
        cout << "----------------------------------------\n";
        hrga = e * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode == 5)
    {
        cout << "Anda Membeli Busana Muslim Rp.87000\n";
        e = 87000;
        cout << "Masukan Jumlah : ";
        cin >> jmlh;
        cout << "----------------------------------------\n";
        hrga = e * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode == 6)
    {
        cout << "Anda Membeli Sarung Rp.35000\n";
        f = 35000;
        cout << "Masukan Jumlah : ";
        cin >> jmlh;
        cout << "----------------------------------------\n";
        hrga = f * jmlh;
        cout << "Harga : Rp." << hrga << endl;
    }

    if (kode > 6 || kode < 1)
    {
        cout << "Barang Yang Anda Masukan Tidak Ditemukan ('Y' to Back 'N' to close) ";
        cin >> lagi;
        if (lagi == 'y' || lagi == 'Y')
        {
            goto awal;
        }
        else if (lagi == 'n' || lagi == 'N')
            goto selesai;
    }

hasil:
    if (hrga >= 150000)
    {
        diskon = 0.2 * hrga;
        cout << "Diskon : Rp." << diskon << endl;
    }
    else if (hrga >= 100000)
    {
        diskon = 0.1 * hrga;
        cout << "Diskon : Rp." << diskon << endl;
    }
    else
        (diskon = 0 * hrga);

    total = hrga - diskon;
    cout << "Harga yang harus Anda bayar : Rp." << total << endl;
    cout << "----------------------------------------\n";

    cout << "Masukan uang Anda : Rp.";
    cin >> byr;
    if (byr < (hrga - diskon))
    {
        cout << "UANG ANDA KURANG (Y to back N to close)\n";
        cin >> lagi;
        if (lagi == 'y' || lagi == 'Y')
        {
            goto awal;
        }
        else if (lagi == 'n' || lagi == 'N')
            goto selesai;
    }
    else
    {
        kembali = byr - total;
        cout << "Kembalian anda adalah : Rp." << kembali << endl;

        cout << "Anda Ingin Mengulangi Lagi (Y/N)?";
        cin >> lagi;
    }

    if (lagi == 'y' || lagi == 'Y')
    {
        goto awal;
    }
    else if (lagi == 'N' || lagi == 'n')
    {
        goto selesai;
    }

selesai:
    cout << "Terima Kasih Atas Kunjungan Anda DI TOKO KOMPUTAMA";

    return 0;
}

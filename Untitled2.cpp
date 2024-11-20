#include <iostream>
#include <string>
using namespace std;

struct Film {
    string judul;
    int harga;
};

void tampilkanFilm(Film film[], int jumlahFilm) {
    cout << "Daftar Film Tersedia:\n";
    for (int i = 0; i < jumlahFilm; i++) {
        cout << i + 1 << ". " << film[i].judul << " - Rp" << film[i].harga << endl;
    }
}

int main() {
    const int jumlahFilm = 3;
    Film film[jumlahFilm] = {
        {"Bolehkah Sekali Saja Kumenangis", 50000},
        {"My Annoying Brother", 45000},
        {"You Will Die In Six Hours", 40000}
    };

    int pilihan, jumlahTiket;
    cout << "Selamat Datang di Sistem Pemesanan Tiket Bioskop!\n\n";
    
    // Tampilkan daftar film
    tampilkanFilm(film, jumlahFilm);
    
    // Pilih film
    cout << "\nMasukkan nomor film yang ingin dipesan: ";
    cin >> pilihan;

    if (pilihan < 1 || pilihan > jumlahFilm) {
        cout << "Pilihan tidak valid.\n";
        return 0;
    }

    // Tentukan jumlah tiket
    cout << "Masukkan jumlah tiket: ";
    cin >> jumlahTiket;

    if (jumlahTiket <= 0) {
        cout << "Jumlah tiket tidak valid.\n";
        return 0;
    }

    // Hitung total biaya
    int totalBiaya = film[pilihan - 1].harga * jumlahTiket;
    cout << "\nTiket berhasil dipesan!\n";
    cout << "Film: " << film[pilihan - 1].judul << endl;
    cout << "Jumlah tiket: " << jumlahTiket << endl;
    cout << "Total biaya: Rp" << totalBiaya << endl;

    return 0;
}

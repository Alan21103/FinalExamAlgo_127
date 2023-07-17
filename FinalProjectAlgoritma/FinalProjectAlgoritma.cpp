#include <iostream>
#include <string>
using namespace std;


const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;
//isi disini
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM : ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama : ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();
		jumlahMahasiswa++;
		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};
//isi disini
void tampilkanSemuaMahasiswa()
{
	cout << "========== DAFTAR MAHASISWA ===========" << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM      : " << NIM[i] << endl;
		cout << "Nama     :" << nama[i] << endl;
		cout << "Tahun Masuk    :" << tahunMasuk[i] << endl;
		cout << "============================================" << endl;
	}
}
void algorithmacariMahasiswaByNIM()
{
	int targetNIM;
	cout << "Masukkan NIM yang ingin dicari: ";
	cin >> targetNIM;
	bool found = false;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == targetNIM) {
			cout << "=========== DAFTAR MAHASISWA ==========" << endl;
			cout << "NIM        :" << NIM[i] << endl;
			cout << "Nama       :" << nama[i] << endl;
			cout << "Tahun Masuk   :" << tahunMasuk[i] << endl;
			cout << "=============================================" << endl;
			found = true;
			break;
		}
	}
}
void algorithmaSortByTahunMasuk()
{
	cout << "==================== MAHASISWA SORTED BY TAHUN MASUK ==================== " << endl;
	for (int i = 0; i < jumlahMahasiswa; i++) {
		cout << "NIM      : " << NIM[i] << endl;
		cout << "Nama     :" << nama[i] << endl;
		cout << "Tahun Masuk    :" << tahunMasuk[i] << endl;
		cout << "============================================" << endl;
	}
}
int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			tambahMahasiswa();
			break;
		case 2:
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}











//2. Menggunakan for while dan stack array


//3. Algoritma stack dan queue adalah dua struktur data yang digunakan dalam pemrograman komputer untuk mengatur dan memanipulasi elemen-elemen data
//   Perbedaan mendasar antara algoritma stack dan queue terletak pada cara elemen-elemen tersebut dimasukkan dan diambil dari struktur data tersebut.

//4. Menggunakan algoritma stack disaat ingin mengunakkan prinsip LIFO (Last in First out) atau data teratas yang terakhir merupakan data yang penting.

//5.


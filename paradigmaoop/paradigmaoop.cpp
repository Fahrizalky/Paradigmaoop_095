#include <iostream>
#include <string>
using namespace std;

class orang {
public:
	string nama;

	orang(string pNama) :
		nama(pNama) {
		cout << "orang dibuat\n" << endl;
	}
	~orang() {
		cout << "orang dihapus\n" << endl;
	}
	int jumlah(int a, int b) {
		return a + b;
	}
};

class pelajar : public orang {
public:
	string sekolah;

	pelajar(string pNama, string pSekolah) :
		orang(pNama),
		sekolah(pSekolah) {
		cout << "Pelajar dibuat\n" << endl;
	}
	~pelajar() {
		cout << "pelajar dihapus\n" << endl;
	}
	string perkenalan() {
		return "Hallo, nama saya" + nama + " Dari sekolah " + sekolah + "\n\n";
	}
};

int main() {
	pelajar siswa("Andi Laksono", "SMAN 1 Bantul");
	cout << siswa.perkenalan();
	cout << "Hasil = " << siswa.jumlah(10, 90) << endl;

	return 0;
}




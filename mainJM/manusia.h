#ifndef MANUSIA_H
#define MANUSIA_H
using namespace std;

class manusia {
public:
	string nama;
	jantung varJantung;
	
	manusia(string pNama)
		: nama(pNama) {
		cout << nama << " idup\n";
	}
	~manusia() {
		cout << nama << " mati\n";
	}
};
#endif

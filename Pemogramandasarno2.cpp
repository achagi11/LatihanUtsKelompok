//Kelompok 2: 1.Vahmi reidina achagi (24104410094)
//            2.Muhammad Putra Apridika (24104410075)
//            3.Adile Ikhsan Muhammad Al Masyhuri (24104410071)
//            4.Dimas Akbar Maulana (24104410059)
//            5.Premas Aji Susilo (24104410055)

#include <iostream>
using namespace std;

int main() {
	int jumlahmotor, jumlahmobil, jammasuk, jamkeluar, totaljam, totalbiaya;
	int biayamobil = 5000;
	int biayamotor = 2000;
	cout << "masukan jumlah motor  :";
	cin >> jumlahmotor;

	cout << "masukan jumlah mobil :";
	cin >> jumlahmobil;

	cout << "masukan jam masuk (format 24 jam) :";
	cin >> jammasuk;

	cout << "masukan jam keluar (format 24 jam) :";
	cin >> jamkeluar;

	//menghitung total waktu
	totaljam = jamkeluar - jammasuk;
	if (totaljam < 1) {
		totaljam = jamkeluar + 24 - jammasuk;
	}

	 //menghitung total biaya
	totalbiaya = ((jumlahmotor * biayamotor) + (jumlahmobil * biayamobil)) * totaljam;

	

	cout << "total biaya parkir : Rp " << totalbiaya << " ( " << totaljam << " jam)" << endl;
	return 0;
}

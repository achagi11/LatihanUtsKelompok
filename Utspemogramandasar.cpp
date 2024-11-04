//Kelompok 2: 1.Vahmi reidina achagi (24104410094)
//            2.Muhammad Putra Apridika (24104410075)
//            3.Adile Ikhsan Muhammad Al Masyhuri (24104410071)
//            4.Dimas Akbar Maulana (24104410059)
//            5.Premas Aji Susilo (24104410055)

#include<iostream>
using namespace std;

void main() {
	string nama;
	char golongan;
	int jamKerja, upah, gajiPerGolongan, gajiPerMinggu, uangLembur;

	cout << "Masukkan nama anda: "; 
	cin >> nama;
	cout << "Masukkan golongan anda: ";
	cin >> golongan;
	cout << "Masukkan jam kerja per minggu: ";
	cin >> jamKerja;

	switch (golongan) {
	case '1': gajiPerGolongan = 25000;
		break;
	case '2': gajiPerGolongan = 35000;
		break;
	case '3': gajiPerGolongan = 50000;
		break;
	}
	if (jamKerja > 48) {
		uangLembur = (jamKerja - 48) * 10000;
		cout << "uang lembur: " << uangLembur << "\n";
	}
	else if (jamKerja < 48) {
		uangLembur = 0;
		cout << "uang lembur: " << uangLembur << "\n";
	}
	upah = gajiPerGolongan * jamKerja;
	cout << "upahnya adalah: " << upah << "\n";

	cout << endl;

	gajiPerMinggu = upah + uangLembur;
	cout << "Total gaji " << nama << " per minggu: " << gajiPerMinggu << endl;

}

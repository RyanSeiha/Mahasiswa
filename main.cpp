#include <iostream>
#include <iomanip>
#include <conio.h>

 
using namespace std;

struct dataMahasiswa
{
	string nama[100];
	string nim[100];
	string jurusan[100];
	string kelas[100];
};


int main()
{
	system("cls");
	int JumlahMahasiswa;
	cout << "Masukan Jumlah Mahasiswa : ";
	cin >> JumlahMahasiswa;

	dataMahasiswa mahasiswa;

	mahasiswa.nama[100];
	mahasiswa.nim[100];
	mahasiswa.jurusan[100];
	mahasiswa.kelas[100];

	system("cls");
	for (int i = 0; i < JumlahMahasiswa; i++)
	{
		system("cls");
		cout << "   Nama : " ;
		cin.ignore();
		getline(cin, mahasiswa.nama[i]);
		cout << "    Nim : " ;
		getline(cin, mahasiswa.nim[i]);
		cout << "Jurusan : " ;
		getline(cin, mahasiswa.jurusan[i]);
		cout << "  Kelas : " ;
		getline(cin, mahasiswa.kelas[i]);
	}

	system("cls");
	getch();
 	return 0;
}
 
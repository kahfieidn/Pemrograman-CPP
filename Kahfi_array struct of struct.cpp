#include <bits/stdc++.h>
#include <string>
#include <cstring>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <conio.h>

using namespace std;

//Struct Pertama
struct data_tanggal{
	int tanggal;
	int bulan;
	int tahun;
}tanggal_lahir;

//Struct Kedua
struct data_alamat{
	string temp;
	string jalan;
	string kelurahan;
	string kecamatan;
	string kota;
	int kode_pos;
}alamat;

//Struct Dalam Struct
struct data_pegawai{
	string temp;
	string nik;
	string nama;
	string jabatan;
	data_tanggal tanggal_lahir;
	data_alamat alamat;
	long int gaji_kotor;
}pegawai;


//drive code
int main() {

int jumlah_pegawai;
cout << "Masukkan Jumlah Pegawai Yang Ingin di Input : ";cin >>jumlah_pegawai;cout << endl;

data_pegawai pegawai[jumlah_pegawai];

for(int i=0; i < jumlah_pegawai; i++){
cout << "\n\t\t Biodata Pegawai \t\t\n\n";
getline(cin, pegawai[i].temp);
cout << "NIK : ";getline(cin, pegawai[i].nik);
cout << "Nama : ";getline(cin, pegawai[i].nama);
cout << "Jabatan : ";getline(cin, pegawai[i].jabatan);
cout << "Tanggal Lahir : "; cin >> pegawai[i].tanggal_lahir.tanggal;
cout << "Bulan Lahir : "; cin >> pegawai[i].tanggal_lahir.bulan;
cout << "Tahun Lahir : "; cin >> pegawai[i].tanggal_lahir.tahun;

cout << "Alamat :\n"; getline(cin, pegawai[i].alamat.temp);
cout << "\tNama Jalan : ";getline(cin, pegawai[i].alamat.jalan);
cout << "\tNama Kelurahan : ";getline(cin, pegawai[i].alamat.kelurahan);
cout << "\tNama Kecamatan : ";getline(cin, pegawai[i].alamat.kecamatan);
cout << "\tNama Kota : ";getline(cin, pegawai[i].alamat.kota);
cout << "Jumlah Gaji Kotor : ";cin >> pegawai[i].gaji_kotor;
}
cout << "==============================\n";


for(int i=0; i < jumlah_pegawai;i++){

cout << "\n\t\t Result Biodata Pegawai \t\t\n\n";
cout << "NIK : " << pegawai[i].nik << endl;
cout << "Nama : " << pegawai[i].nama<< endl;
cout << "Jabatan : " << pegawai[i].jabatan << endl;
cout << "Tanggal lahir : " << pegawai[i].tanggal_lahir.tanggal << "-" << pegawai[i].tanggal_lahir.bulan << "-" << pegawai[i].tanggal_lahir.tahun << endl;
cout << "Alamat : \n";
cout << "\tJalan : " << pegawai[i].alamat.jalan << endl;
cout << "\tKelurahan : " <<pegawai[i].alamat.kelurahan << endl;
cout << "\tKecamatan : " <<  pegawai[i].alamat.kecamatan << endl;
cout << "\tKota : " << pegawai[i].alamat.kota << endl;
cout << "Jumlah Gaji Kotor : " << pegawai[i].gaji_kotor << endl;
printf("%s", "==================================================\n");
cout << "\tTOTAL GAJI BERSIH + PAJAK\n";
printf("%s", "==================================================\n");

int pajak;
int penghasilan = pegawai[i].gaji_kotor;

if(pegawai[i].gaji_kotor < 2000000){
	pajak = pegawai[i].gaji_kotor * 1 / 100;
	penghasilan = penghasilan - pajak;
}else if(pegawai[i].gaji_kotor < 5000000){
	pajak = pegawai[i].gaji_kotor * 2 / 100;
	penghasilan = penghasilan - pajak;
}else if(pegawai[i].gaji_kotor < 10000000){
	pajak = pegawai[i].gaji_kotor *3 / 100;
	penghasilan = penghasilan - pajak;
}else{
	pajak = pegawai[i].gaji_kotor *5 / 100;
	penghasilan = penghasilan - pajak;
}
cout << penghasilan;
}
getch();

}

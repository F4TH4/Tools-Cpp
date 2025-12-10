#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int pilihan;
	char ulang;
	do
	{
		cout << "   TOOLS ALGORITMA" << endl;
		cout << "Powered By : Fathahazz" << endl;
		cout << "================================" << endl;
		cout << "1. Menghitunng Gaji Karyawan" << endl;
		cout << "2. Membuat Menu Berulang" << endl;
		cout << "3. Menampilkan Biodata Siswa" << endl;
		cout << "4. Menghitung Diskon Potongan Harga" << endl;
		cout << "5. Cek Tahun Kabisat" << endl;
		cout << "6. Menentukan Nama Hari" << endl;
		cout << "7. Menentukan Nama Bulan" << endl;
		cout << "8. Konversi Kilometer ke Meter" << endl;
		cout << "9. Konversi Detik Ke Menit Dan Jam" << endl;
		cout << "10. Menghitung Jumlah Huruf Vokal" << endl;
		cout << "11. Menghitung Jumlah Kata Dalam Kalimat" << endl;
		cout << "12. Membuat Kalkulator Sederhana" << endl;
		cout << "13. Menghitung Tarif Parkir" << endl;
		cout << "14. Membuat Aplikasi Kasir Sederhana" << endl;
		
		cout << endl;
		
		cout << "Masukan Pilihan Anda : ";
		cin >> pilihan;
		
		switch (pilihan) {
			case 1: {
				string nama;
				char golongan;
				int jamkerja, upahperjam, totalupah;
				
				cout << "## Tools Menghitung Gaji Karyawan ##" << endl;
				cout << "======================================" << endl;
				
				// inputan
				cin.ignore();
				cout << "Nama Karyawan : ";
				getline(cin, nama);
				
				cout << "Golongan : ";
				cin >> golongan;
				
				cout << "Jumlah jam kerja : ";
				cin >> jamkerja;
				
				//mementukan upar sesuai golongan
				switch (golongan) {
					case 'A':
						upahperjam = 5000;
						break;
					case 'B':
						upahperjam = 7000;
						break;
					case 'C':
						upahperjam = 8000;
						break;
					case 'D':
						upahperjam = 10000;
						break;
				}
				totalupah = jamkerja * upahperjam;
				
				// cek jam kerja apakah lebih 48jam
				if ( (jamkerja - 48) > 0 ) {
					totalupah = totalupah + ((jamkerja - 48)*4000);
				}
				
				// output
				cout << endl;
				cout << nama << " menerima upah Rp." << totalupah << " per minggu";
				cout << endl;
				break;
			}
					
			case 2: {
				int plh;
				char ulng;
				do
				{
					cout << "## Daftar Menu Kedai Hazz ##" << endl;
					cout << "============================" << endl;
					cout << "1. Nasi Ayam geprek" << endl;
					cout << "2. Nasi Goreng" << endl;
					cout << "3. Kwetiau Goreng" << endl;
					cout << "4. Es teh " << endl;
					cout << "5. Kopi Hitam" << endl;
					cout << "6. Es kocok" << endl;
					cout << endl;
					
					cout << "Masukan pilihan : ";
					cin >> plh;
					
					//switch
					switch (plh) {
						case 1:
							cout << "Anda memilih Nasi ayam geprek" << endl;
							break;
						case 2:
							cout << "Anda memilih Nasi geprek" << endl;
							break;
						case 3:
							cout << "Anda memilih Kwetiau goreng" << endl;
							break;
						case 4:
							cout << "Anda memilih Es Teh" << endl;
							break;
						case 5:
							cout << "Anda memilih Kopi Hitam" << endl;
							break;
						case 6:
							cout << "Anda memilih Es Kocok" << endl;
							break;
						default:
							cout << "Menu tidak tersedia" << endl;
							break;
					}
					cout << endl;
					
					cout << "Ingin memilih menu lain? y/n : ";
					cin >> ulng;
					cout << endl;
				}
				while (ulng!= 'n');
				
				cout << "Terimakasih telah memesan, pesanan segera diantarkan";
				cout << endl;
				break;
			}
			
			case 3: {
				
				string nama, nim, fakultas, jurusan, kotaasal, alamat;
				
				cout << "## Tools Biodata Mahasiswa" << endl;
				cout << "==========================" << endl;
				cout << endl;
				
				cin.ignore();
				cout << "Nama Mahasiswa : ";
				getline(cin, nama);
				
				cout << "NIM : ";
				getline(cin, nim);
				
				cout << "Fakultas : ";
				getline(cin, fakultas);
				
				cout << "Jurusan : ";
				getline(cin, jurusan);
				
				cout << "Kota Asal : ";
				getline(cin, kotaasal);
				
				cout << "Alamat : ";
				getline(cin, alamat);
				
				cout << endl;
				
				cout << "# DATA NAHASISWA" << endl;
				cout << "================" << endl;
				cout << "Nama : " << nama << endl;
				cout << "NIM : " << nim << endl;
				cout << "Fakultas : " << fakultas << endl;
				cout << "Jurusan : " << jurusan << endl;
				cout << "Kota Asal : " << kotaasal << endl;
				cout << "Alamat : " << alamat << endl;
				break; 
			}
			
			case 4: {
				
				int totalbelanja, hargaakhir;
				
				cout << "Tools Diskon Potongan Harga" << endl;
				cout << "===========================" << endl;
				cout << endl;
				
				cout << "Total belanja : Rp.";
				cin >> totalbelanja;
				cout << endl;
				
				if ((totalbelanja >= 100000) && (totalbelanja < 500000)) {
					hargaakhir = totalbelanja - (0.1*totalbelanja);
					cout << "Selamat, anda mendapat diskon 10%" << endl;
				}
				
				else if ((totalbelanja >= 500000) && (totalbelanja < 1000000)) {
					hargaakhir = totalbelanja - (0.2*totalbelanja);
					cout << "Selamat, anda mendapatkan diskon 20%" << endl;
				}
				
				else if (totalbelanja >= 1000000) {
					hargaakhir = totalbelanja - (0.3*totalbelanja);
					cout << "Selamat, anda mendapatkan diskon 30%" << endl;
				}
				
				else {
					hargaakhir = totalbelanja;
				}
				
				cout << "Total Bayar : Rp." << hargaakhir << endl;
				break;
			}
			
			case 5: {
				
				int tahun;
				
				cout << "## Tools cek tahun kabisat" << endl;
				cout << "==========================" << endl;
				
				cout << "Input Tahun : ";
				cin >> tahun;
				
				if (tahun % 400 == 0) {
					cout << tahun << " adalah tahun kabisat";
				}
				
				else if (tahun % 100 == 0) {
					cout << tahun << " bukan tahun kabisat";
				}
				
				else if (tahun % 4 == 0) {
					cout << tahun << " adalah tahun kabisat";
				}
				
				else {
					cout << tahun << " bukan tahun kabisat";
				}
				
				cout << endl;
				break;
			}
			
			case 6: {
				
				int n;
				
				cout << "## Tools menentukan nama hari ##" << endl;
				cout << "================================" << endl;
				cout << endl;
				
				cout << "input angka hari (1-7) : ";
				cin >> n;
				
				if ( n == 1) {
					cout << "SENIN";
				}
				
				else if ( n == 2) {
					cout << "SELASA";
				}
				
				else if ( n == 3) {
					cout << "RABU";
				}
				
				else if ( n == 4) {
					cout << "KAMIS";
				}
				
				else if ( n == 5) {
					cout << "JUMAT";
				}
				
				else if ( n == 6) {
					cout << "SABTU";
				}
				
				else if ( n == 7) {
					cout << "MINGGU";
				}
				
				else {
					cout << "MILIH YANG BENER!";
				}
					
				cout << endl;
				break;
			}
			
			case 7: {
				
				int n;
				
				cout << "## tools menentukan nama bulan ##" << endl;
				cout << "=================================" << endl;
				
				cout << "Masukan angka bulan : ";
				cin >> n;
				
				if ( n == 1) {
					cout << "JANUARI";
				}
				
				else if ( n == 2) {
					cout  << "FEBRUARI";
				}
				
				else if ( n == 3) {
					cout << "MARET";
				}
				
				else if ( n == 4) {
					cout << "APRIL";
				}
				
				else if ( n == 5) {
					cout << "MEI";
				}
				
				else if ( n == 6) {
					cout << "JUNI";
				}
				
				else if ( n == 7) {
					cout << "JULI";
				}
				
				else if ( n == 8) {
					cout << "AGUSTUS";
				}
				
				else if ( n == 9) {
					cout << "SEPTEMBER";
				}
				
				else if ( n == 10) {
					cout << "OKTOBER";
				}
				
				else if ( n == 11) {
					cout << "NOVEMBER";
				}
				
				else if ( n == 12) {
					cout << "DESEMBER";
				}
				
				else {
					cout << "Tidak ada pilihan";
				}
				
				cout << endl;
				
				break;
			}
			
			case 8: {
				
				float km, m;
				
				cout << "## Tools konversi kilomater ke mater ##" << endl;
				cout << "=======================================" << endl;
				cout << endl;
				
				cout << "Masukan jarak dalam kilometer(contoh : 1000) : ";
				cin >> km;
				cout << endl;
				
				m = km * 1000;
				cout << km << " km = " << m << " M" << endl;
				cout << endl;
				break;
			}
			
			case 9: {
				
				int dtk, mnt, jam;
				
				cout << "## Tools konversi detik ke menit dan jam ##" << endl;
				cout << "===========================================" << endl;
				
				cout << "Masukan jumlah detik(contoh : 10) : ";
				cin >> dtk;
				
				mnt = dtk / 60;
				dtk = dtk % 60;
				
				jam = mnt / 60;
				mnt = mnt % 60;
				
				cout << "Hasil konversi : " << jam << " jam," << mnt << " menit, " << dtk << " detik" << endl;
				
				break;
			}
			
			case 10: {
				
				string c;
				int vkl = 0;
				
				cin.ignore();
				cout << "## Tools menghitung jumlah huruf vokal ##" << endl;
				cout << "=========================================" << endl;
				cout << endl;
				
				cout << "input kata / kalimat : ";
				getline(cin, c);
				cout << endl;
				
				//hitung jumalah huruf
				for ( int i = 0; i < c.length(); i++) {
					if (c[i]=='a'||c[i]=='i'||c[i]=='u'||c[i]=='e'||c[i]=='o') {
						vkl++;
					}
				}
				
				//total huruf vokal
				if (vkl > 0) {
					cout << "Jumlah huruf  vokal = " << vkl;
				}
				else {
					cout << "Huruf vokal tidak ditemukan";
				}
				
				cout << endl;
				break;
			}
			
			case 11: {
				
				string klmt;
				int jumlahkata = 0;
				
				cout << "## Tools menghitung jumlah kata ##" << endl;
				cout << "==================================" << endl;
				cout << endl;
				
				cin.ignore();
				cout << "Masukan kalimat : ";
				getline(cin, klmt);
				
				for (int i = 0; i < klmt.length(); i++) {
					//untuk periksa apakah ada spasi
					if (klmt[i] == ' ') {
						jumlahkata++;
					}
				}
				//tambah 1 karena kata terakhir tidak dihitung di dalam loop
				jumlahkata++;
				
				cout << "Jumlah kata dalam kalimat adalah : " << jumlahkata << endl; 
				
				break;
			}
			
			case 12: {
				
				int plh;
				float no1, no2;
				
				cout << "## Kalkulator Sederhana ##" << endl;
				cout << "==========================" << endl;
				cout << endl;
				
				cout << "1. Penjumlahan" << endl;
				cout << "2. Penguranngan" << endl;
				cout << "3. Perkalian" << endl;
				cout << "4. Pembagian" << endl;
				cout << "5. Modulus" << endl;
				cout << endl;
				
				cout << "Input pilihan operasi(1-5) : ";
				cin >> plh;
				cout << "Angka Pertama : ";
				cin >> no1;
				cout << "Angka Kedua : ";
				cin >> no2;
				cout << endl;
				
				switch (plh) {
					case 1:
						cout << "Hasil dari " << no1 << " + " << no2 << " = " << no1+no2;
						break;
					case 2:
						cout << "Hasil dari " << no1 << " - " << no2 << " = " << no1-no2;
						break;
					case 3:
						cout << "Hasil dari " << no1 << " * " << no2 << " = " << no1*no2;
						break;
					case 4:
						cout << "Hasil dari " << no1 << " / " << no2 << " = " << no1/no2;
						break;
					case 5:
						cout << "Hasil dari " << no1 << " % " << no2 << " = " << (int)no1 % (int)no2;
						break;
					default :
						cout << "Maaf, pilihan menu tidak tersedia" << endl;
				}
				
				cout << endl;
				break;
			}
			
			case 13: {
				
				int jammasuk, jamkeluar, totaljam, totalbiaya;
				
				cout << "## Tools Menghitung tarif parkir ##" << endl;
				cout << "===================================" << endl;
				cout << endl;
				
				cout << "Input jam masuk (format 24 jam) : ";
				cin >> jammasuk;
				
				cout << "Input jam keluar (format 24 jam) : ";
				cin >> jamkeluar;
				cout << endl;
				
				//menghitung total waktu parkir
				totaljam = jamkeluar - jammasuk;
				if (totaljam < 0) {
					//dianggap parkir keluar esok hari
					totaljam = jamkeluar + 24 - jammasuk;
				}
				
				//hitung total biaya
				totalbiaya = totaljam * 5000;
				
				cout << "Total biaya parkir : Rp." << totalbiaya << " (" << totaljam << " jam)" << endl;
				
				break;
			}
			
			case 14: {
				
				cout << "## Tools Aplikasi Kasir ##" << endl;
				cout << "==========================" << endl;
				cout << endl;
				
				const int MAXBARANG = 10;
				string namabarang[MAXBARANG];
				long hargabarang[MAXBARANG];
				int jumlahbarang[MAXBARANG];
				long jumlahtotalbarang;
				long totalharga = 0;
				long jumlahbayar = 0;
				
				cout << "| Selamat datang di Hazz Market |" << endl;
				cout << endl;
				
				cout << "Masukan jumlah barang yang ingin dibeli : ";
				cin >> jumlahtotalbarang;
				cout << endl;
				
				if (jumlahtotalbarang <= 0 || jumlahtotalbarang > MAXBARANG) {
					cout << "Jumlah barang tidak valid!" << endl;
					return 0;
				}
				
				for (int i = 0; i < jumlahtotalbarang; i++) {
					cout << "Barang ke-" << i+1 << endl;
					cout << "Nama barang : ";
					getline(cin >>ws, namabarang[i]);
					cout << "Harga Satuan : ";
					cin >> hargabarang[i];
					cout << "Jumlah " << namabarang[i] << " yang dibeli : ";
					cin >> jumlahbarang[i];
					cout << endl;
				}
				cout << endl;
				
				cout << "-------------------------------------------------------" << endl;
				cout << "#####-------- Struk Pembelian Hazz Market --------#####" << endl;
				cout << "-------------------------------------------------------" << endl;
				cout << "No-Barang------Jumlah------Harga Satuan-------Sub Total" << endl;
				for (int i = 0; i < jumlahtotalbarang; i++) {
					cout << setw(1) << i+1 << " ";
					cout << left << setw(12) << namabarang[i];
					cout << right << setw(5) << jumlahbarang[i];
					cout << setw(18) << hargabarang[i];
					cout << setw(15) << jumlahbarang[i] * hargabarang[i];
					cout << endl;
					totalharga = totalharga + (jumlahbarang[i] * hargabarang[i]);
				}
				cout << "-------------------------------------------------------" << endl;
				
				cout << "Total harga : Rp. " << totalharga << endl << endl;
				
				cout << "Jumlah bayar : Rp. " ;
				cin >> jumlahbayar;
				cout << endl;
				
				while (jumlahbayar - totalharga < 0) {
					cout << "Maaf uang anda kurang, lakukan pembayaran ulang dan pastikan uang cukup" << endl;
					cout << "Jumlah Bayar : Rp. ";
					cin >> jumlahbayar;
					cout << endl;
				}
				
				cout << "Kembalian : Rp. " << jumlahbayar-totalharga << endl;
				cout << endl;
				cout << "------------------------------------------------------" << endl;
				cout << "####-----    Terimakasih sudah berbelanja    -----####" << endl;
				cout << "------------------------------------------------------" << endl;
				
				break;
			}
		}
		// WAJIB
		cout << endl;
		
		cout << "Ingin Memilih tools Lain? (Y/N) : ";
		cin >> ulang;
		cout << endl;
	}
	
	while (ulang!= 'n');
	
	cout << "Terimakasih telah menggunakan tools ini";
	cout << endl;
	//

	return 0;

}

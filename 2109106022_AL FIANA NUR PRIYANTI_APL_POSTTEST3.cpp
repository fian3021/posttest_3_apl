/*
Nama 	: Al Fiana Nur Priyanti
NIM 	: 2109106022
Kelas 	: A'21
*/

#include <iostream> 
#include <iomanip>  //header untuk mengatur tampilan
using namespace std;

//prosedur untuk judul/salam pembuka
void salam_pembuka(){
	cout << endl; 
	cout << " ..........................................." << endl;
	//fungsi setw() untuk mengatur lebar tampilan
	cout << " -" << setw(16) << " " << "WELCOME TO" 
	 	 << setw(15) << " " << "-" << endl;
	cout << " -" << setw(12) << " " << "ARITMETIKA COUNTER" 
		 << setw(11) << " " << "-" << endl;
	cout << " -" << setw(10) << " " << "Kalkulator Aritmetika" 
		 << setw(10) << " " << "-" << endl;
	cout << " '''''''''''''''''''''''''''''''''''''''''''" << endl;
}	

//prosedur untuk menu operasi
void menu_operasi(){
	cout << endl; 
	//fungsi setw() untuk mengatur lebar tampilan
	cout << setw(15) << " " << "--------------" << endl;
	cout << setw(16) << " " << "MENU OPERASI" << endl;
	cout << setw(15) << " " << "--------------" << endl;
	cout << setw(11) << " " << "(+) 1. Penjumlahan (+)" << endl;
	cout << setw(11) << " " << "(-) 2. Pengurangan (-)" << endl;
	cout << setw(11) << " " << "(*) 3.   Perkalian (*)" << endl;
	cout << setw(11) << " " << "(/) 4.   Pembagian (/)" << endl;
	cout << setw(11) << " " << "(%) 5.     Modulus (%)" << endl;
	cout << setw(11) << " " << "----------------------" << endl;
	cout << endl;
}

//prosedur untuk salam penutup
void salam_penutup(){
	cout << endl;
	cout << " ..........................................." << endl;
	//fungsi setw() untuk mengatur lebar tampilan
	cout << " -" << setw(16) << " " << "THANK YOU" 
		 << setw(16) << " " << "-" << endl;
	cout << " -" << setw(14) << " " << "FOR USING THIS" 
		 << setw(13) << " " << "-" << endl;
	cout << " -" << setw(12) << " " << "ARITMETIKA COUNTER" 
		 << setw(11) << " " << "-" << endl;
	cout << " '''''''''''''''''''''''''''''''''''''''''''" << endl;
}

//fungsi overloading penjumlahan
//2 variabel
int jumlah(int x, int y){
	//mengembalikan nilai jumlah
	return x + y; 
}
//3 variabel
int jumlah(int x, int y, int z){
	return x + y + z;
}

//fungsi overloading pengurangan
//2 variabel
int kurang(int x, int y){
	//mengembalikan nilai kurang
	return x - y;
}
//3 variabel
int kurang(int x, int y, int z){
	return x - y - z;
}

//fungsi overloading perkalian
//2 variabel
int kali(int x, int y){
	//mengembalikan nilai kali
	return x * y;
}
//3 variabel
int kali(int x, int y, int z){
	return x * y * z;
}

//fungsi overloading pembagian
//2 variabel
float bagi(float x, float y){
	//percabangan 
	if (y==0){
		//mengembalikan nilai -1 jika nilai penyebut = 0
		return -1;
	}
	else{
		//mengembalikan nilai bagi
		return x / y;
	}
}
//3 variabel
float bagi(float x, float y, float z){
	if (y==0 or z==0){
		return -1;
	}
	else{
		return x / y / z;
	}
}

//fungsi overloading modulus
//2 variabel
int mod(int x, int y){
	//mengembalikan nilai modulus
	return x % y;
}
//3 variabel
int mod(int x, int y, int z){
	return x % y % z;
}

//fungsi utama program
int main(){
	//memanggil prosedur salam pembuka
	salam_pembuka();
	
	//deklarasi variabel 
	int x, y, z; /*
	x untuk bilangan 1
	y untuk bilangan 2
	z untuk bilangan 3*/
	int pilih_operasi, pilih_variabel;	
	char ulang = 'y'; 
	int hitung = 0; 
	
	//while loop untuk mengulangi program
	while (ulang == 'y'){
		//memanggil prosedur menu operasi
		menu_operasi();
		
		//inputan memilih jenis operasi
		cout << "  Silahkan Pilih Operasi Aritmatika : "; cin >> pilih_operasi;
		cout << endl;
		
		//inputan memilih banyak variabel
		cout << "  Masukkan Jumlah Variabel [2/3] : "; cin >> pilih_variabel;
		cout << endl;
		
		//judul tampilan input bilangan
		cout << " ..........................................." << endl;
		cout << " |" << setw(12) << " " << "Masukkan Bilangan" 
			 << setw(12) << " " << "|" << endl;
		cout << " '''''''''''''''''''''''''''''''''''''''''''" << endl;
		
		//percabangan jika variabel = 2
		if (pilih_variabel == 2){
			//melakukan input x dan y
			cout << "  Bilangan 1 [x] 	: "; cin >> x;
			cout << "  Bilangan 2 [y] 	: "; cin >> y;
			
			cout << endl;
			//judul tampilan hasil operasi
			cout << " ..........................................." << endl;
			cout << " |" << setw(14) << " " << "Hasil Operasi" 
				 << setw(14) << " " << "|" << endl;
			cout << " '''''''''''''''''''''''''''''''''''''''''''" << endl;
			
			//percabangan menampilkan hasil sesuai operasi yang dipilih
			//dengan memanggil fungsi overloading 2 parameter variabel
			if (pilih_operasi == 1){  
				cout << "  Penjumlahan 	"<< x <<" + "<< y <<" = " 
					 << jumlah(x, y) << endl; //fungsi penjumlahan
			}
			else if (pilih_operasi == 2){
				cout << "  Pengurangan 	"<< x <<" - "<< y <<" = " 
					 << kurang(x, y) << endl; //fungsi pengurangan
			}
			else if (pilih_operasi == 3){ 
				cout << "  Perkalian 	"<< x <<" * "<< y <<" = " 
					 << kali(x, y) << endl; //fungsi perkalian
			}
			else if (pilih_operasi == 4){
				//deklarasi variabel
				int hasil_bagi = bagi(x, y);
				//percabangan 
				if (hasil_bagi == -1){
					//tampilan jika nilai bagi -1
					cout << "  Hasil Pembagian Tak Terdefinisi!" << endl;
				}
				else{ 
					//tampilan jika bukan -1
					cout << "  Pembagian 	"<< x <<" / "<< y <<" = " 
						 << bagi(x, y) << endl; //fungsi pembagian
				}
			}
			else if (pilih_operasi == 5){
				cout << "  Modulus 	"<< x <<" % "<< y <<" = " 
					 << mod(x, y) << endl; //fungsi modulus
			}
			else{
				//tampilan jika pilihan tidak tersedia di menu
				cout << "  Hasil Operasi Tidak Tersedia!" << endl;
				cout << "  Periksa Kembali Pilihan Operasi!" << endl;
			}
		}
		//percabangan jika variabel = 3
		else if (pilih_variabel == 3){
			//melakukan input x, y, dan z
			cout << "  Bilangan 1 [x] 	: "; cin >> x;
			cout << "  Bilangan 2 [y] 	: "; cin >> y;
			cout << "  Bilangan 3 [z] 	: "; cin >> z;
			
			cout << endl;
			//judul tampilan hasil operasi
			cout << " ..........................................." << endl;
			cout << " |" << setw(14) << " " << "Hasil Operasi" 
				 << setw(14) << " " << "|" << endl;
			cout << " '''''''''''''''''''''''''''''''''''''''''''" << endl;
			
			//percabangan menampilkan hasil sesuai operasi yang dipilih
			//dengan memanggil fungsi overloading 3 parameter variabel
			if (pilih_operasi == 1){
				cout << "  Penjumlahan 	"<< x <<" + "<< y <<" + "<< z <<" = " 
					 << jumlah(x, y, z) << endl; //fungsi penjumlahan
			}
			else if (pilih_operasi == 2){
				cout << "  Pengurangan 	"<< x <<" - "<< y <<" - "<< z <<" = " 
					 << kurang(x, y, z) << endl; //fungsi pengurangan
			}
			else if (pilih_operasi == 3){
				cout << "  Perkalian 	"<< x <<" * "<< y <<" * "<< z <<" = " 
					 << kali(x, y, z) << endl; //fungsi perkalian
			}
			else if (pilih_operasi == 4){
				int hasil_bagi = bagi(x, y, z);
				if (hasil_bagi == -1){
					//jika nilai bagi = -1
					cout << "  Hasil Pembagian Tak Terdefinisi!" << endl;
				}
				else{
					cout << "  Pembagian 	"<< x <<" / "<< y <<" / "<< z <<" = " 
						 << hasil_bagi << endl; //fungsi pembagian
				}
			}
			else if (pilih_operasi == 5){
				cout << "  Modulus	 "<< x << " % "<< y <<" % "<< z <<" = " 
					 << mod(x, y, z) << endl; //fungsi modulus
			}
			else{
				//jika pilihan tidak sesuai menu operasi
				cout << "  Hasil Operasi Tidak Tersedia!" << endl;
				cout << "  Periksa Kembali Pilihan Operasi!" << endl;
			}
		}
		else{
			//jika inputan variabel selain 2/3
			cout << "  Maaf Variabel Tidak Tersedia!" << endl;
		}
		
		cout << endl;
		//pilihan ingin mengulang program atau tidak
		cout << "  Apakah Anda Ingin Mengulangi? [y/n] : "; cin >> ulang;
		
		//increment hitung jika memilih mengulang
		hitung++;
	}
	//memanggil prosedur salam penutup
	salam_penutup();	
	
	return 0;
}


#include <iostream>
#include <conio.h>
using namespace std;

void garis(){
		cout<<"========================================================================="<<endl;;
	}
int main(){
	system ("color 3");
	string plat;
	char kode_servis,d,e;
	int banyak_servis,f,g,h,i,j;
	cout<<"\t\t\t==============================\n\n";
	cout<<"\t\t\t      Aplikasi Bengkel  	   \n\n";
	cout<<"\t\t\t==============================\n\n";
	cout<<"\t=============================================================\n"<<endl;
	cout<<"\t| Kode Servis |        Servis          | Kategori | Tarif   |\n"<<endl;
	cout<<"\t|     1       |Membersihkan Mesin      | Sedang   | 200.000 |\n"<<endl;
	cout<<"\t|     2       |Memperbaiki Mesin       | Berat    | 500.000 |\n"<<endl;
	cout<<"\t|     3       |Membersihkan Suku Cadang| Ringan   | 50.000  |\n"<<endl;
	cout<<"\t|     4       |Memperbaiki Suku Cadang | Sedang   | 100.000 |\n"<<endl;
	cout<<"\t|     5       |Mengganti Suku Cadang   | Sedang   | 150.000 |\n"<<endl;
	cout<<"\t=============================================================\n"<<endl;
	cout<<"Masukkan Plat Nomor Kendaraan \t \t : ";
	cin>>plat;	
	garis();
	cout<<"Masukkan Kode Servis  \t\t\t : ";
	cin>>kode_servis;
	garis();
	if (kode_servis=='1'){
	cout<<"Servis \t \t \t \t\t : Membersihkan Mesin"<<endl;
	cout<<"Kategori \t \t \t\t : Sedang"<<endl;
	cout<<"Tarif \t \t \t \t\t : 200.000"<<endl;
	}else if(kode_servis=='2'){
	cout<<"Servis \t \t \t \t\t : Memperbaiki Mesin"<<endl;
	cout<<"Kategori \t \t \t \t : Berat"<<endl;
	cout<<"Tarif \t \t \t \t \t : 500.000"<<endl;
	}else if(kode_servis=='3'){
	cout<<"Servis \t \t \t \t \t : Membersihkan Suku Cadang"<<endl;
	cout<<"Kategori \t \t \t \t : Ringan"<<endl;
	cout<<"Tarif \t \t \t \t \t : 50.000"<<endl;
	}else if(kode_servis=='4'){
	cout<<"Servis \t \t \t \t \t : Memperbaiki Suku Cadang"<<endl;
	cout<<"Kategori \t \t \t\t : Sedang"<<endl;
	cout<<"Tarif \t \t \t \t \t : 100.000"<<endl;
	}else if(kode_servis=='5'){
	cout<<"Servis \t \t \t \t \t : Mengganti Suku Cadang"<<endl;
	cout<<"Kategori \t \t \t \t : Sedang"<<endl;
	cout<<"Tarif \t \t \t \t \t : 150.000"<<endl;
	}
	garis();
	cout<<"Berapa Banyak Servis Yang Anda Lakukan \t : ";
	cin>>banyak_servis;
	garis();
	if(kode_servis=='1'){
	f=banyak_servis*210000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;
		
	}
	else if(kode_servis=='2'){
	f=banyak_servis*500000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;
			
	}
	else if(kode_servis=='3'){
	f=banyak_servis*50000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;	
	}
	else if(kode_servis=='4'){
	f=banyak_servis*100000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;	
	}
	else if(kode_servis=='5'){
	f=banyak_servis*150000;
	cout<<"Total Awal \t\t\t\t : ";cout<<f<<endl;	
	}
	if(f>=1000000){
		g=f*10/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=800000){
		g=f*8/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=600000){
		g=f*6/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=400000){
		g=f*4/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}
		else if(f>=200000){
		g=f*2/100;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;
		}else{
		g=0;
		cout<<"Diskon \t\t\t\t\t : ";cout<<g<<endl;	
		}
	h=f-g;
	cout<<"Total Akhir \t\t\t\t : ";cout<<h<<endl;
	garis();
	cout<<"Bayar \t\t\t\t\t : ";
	cin>>i;
	j=i-h;
	cout<<"Kembalian \t\t\t\t : ";cout<<j<<endl;
	garis();
	cout<<"\t\t\t\t Terimakasih"<<endl;
	garis();
	return 0;
}

#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){
	cout<<"======================================================================================================================"<<endl;
	cout<<														"Aplikasi Warnet"<<endl;
	cout<<"======================================================================================================================"<<endl;
	cout<<"	Kode Pelanggan	Jenis Pelanggan	Tarif Jam Pertama	Tarif Berikutnya"<<endl;
	cout<<"======================================================================================================================"<<endl;
	cout<<"		1	Member			3000			2000	"<<endl;
	cout<<"		2	Non Member		4000			3000	"<<endl;
	cout<<"======================================================================================================================"<<endl;
	
	int kode;
	cout<<"Masukan kode pelanggan:";cin>>kode;
	string jenis;
	long tarif,berikut;

	if(kode==1)
	{jenis="Member";tarif=3000;berikut=2000;}
	else if(kode==2)
	{jenis="Non Member";tarif=4000;berikut=3000;}

	cout<<"Jenis pelanggan:"<<jenis<<endl;
	cout<<"Tarif Jam Pertama:"<<tarif<<endl;
	cout<<"Tarif Jam Berikutnya:"<<berikut<<endl;
	cout<<"====================================================================================================================="<<endl;
	
	long lama;
	cout<<"Berapa Lama Anda Sewa:";cin>>lama;
	cout<<"====================================================================================================================="<<endl;

	long total=(berikut*lama)-berikut+tarif;
	cout<<"Total:"<<total<<endl;
	cout<<"====================================================================================================================="<<endl;
	
	long bayar;
	cout<<"Bayar:";
	cin>>bayar;
	cout<<"====================================================================================================================="<<endl;

	long kembali=bayar-total;
	cout<<"Kembalian:"<<kembali<<endl;


	cout<<"Terima Kasih :)";


	
_getch();
return 0;
}

# include <stdio.h>
# include <conio.h>
# include <iostream>
using namespace std;
int main()
{
char menu,*belanja,beliLgi;
int ttlBayar,Kembalian,jmlPembelian,hargaProduk,totalHarga;

atas:
cout<<"NAMA 	: MUHAMMAD RIZAL AKBAR\n";
cout<<"NIM 		: F1B017068\n";
cout<<"Kelompok	: Tiga\n";

 cout<<"===================================================="<<endl;
 cout<<"~~~~~~~~~~~~~~~~~~~~~BUKALAPAK~~~~~~~~~~~~~~~~~~~~~~"<<endl;
 cout<<"===================================================="<<endl;
 cout<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Pilihan yang tersedia"<<endl;
 cout<<"----------------------------------------------------"<<endl; 
 cout<<"1. Baju"<<endl;
 cout<<"2. Tiket kereta"<<endl;
 cout<<"3. Vocher game"<<endl;
 cout<<"4. Vocher streaming"<<endl;
 cout<<"5. voucher internet"<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"pilihlah sesuai keinginan anda [1-4]  : ";cin>>menu;
 cout<<"Jumlah Pembelian  : ";cin>>jmlPembelian;
 cout<<"----------------------------------------------------"<<endl;

  if(menu=='1'){belanja="Baju supreme limited edition";
  hargaProduk=300000;}
  else if(menu=='2'){belanja="tiket kereta api";
  hargaProduk=10000;}
  else if(menu=='3'){belanja="vocher  game";
  hargaProduk=50000;}
  else if(menu=='4'){belanja="vocher streaming unlimited";
  hargaProduk=80000;}
  else if(menu=='5'){belanja="voucher internet 30gb";
  hargaProduk=120000;}

 
  else
  {
   cout<<"Maaf, produk  tidak tersedia"<<endl;
   cout<<"Pilih kembali";getch();
   cout<<endl;
   goto atas;
  }
 totalHarga=hargaProduk*jmlPembelian;
 cout<<"pembelian   : "<<belanja<<endl;
 cout<<"Harga Satuan   : Rp. "<<hargaProduk<<endl;
 cout<<"Jumlah Pembelian  : "<<jmlPembelian<<endl;
 cout<<"Total Harga   : Rp. "<<totalHarga<<endl;
 cout<<"----------------------------------------------------"<<endl;
 cout<<"Total Bayar   : Rp. ";
 cin>>ttlBayar;
 Kembalian=ttlBayar-totalHarga;
 cout<<"Kembalian   : Rp. "<<Kembalian<<endl<<endl;
 cout<<"===================================================="<<endl;
 cout<<"Beli kembali produk? [Y/T] : ";cin>>beliLgi;
 cout<<endl;
  if(beliLgi=='Y'||beliLgi=='y')
  {goto atas;}
  else{
   cout<<"Terima Kasih Atas Pembelian Produk Kami";
   cout<<endl;
  }
getch();
}


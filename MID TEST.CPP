#include<iostream.h>
#include<conio.h>

void main ()
{

char Nama[25],Huruf;
float NT1,NT2,NT3,ND,NF,TNT,NA;
int Nim;
  cout<<"masukkan Nama: ";cin>>Nama;
  cout<<"masukkan Nim: ";cin>>Nim;
  cout<<"masukkan Nilai Tugas 1: ";cin>>NT1;
  cout<<"masukkan Nilai Tugas 2: ";cin>>NT2;
  cout<<"masukkan Nilai Tugas 3: ";cin>>NT3;
  cout<<"masukkan Nilai MID : ";cin>>ND;
  cout<<"masukkan Nilai FINAL : ";cin>>NF;

  TNT=(NT1+NT2+NT3)/3;
  NA = (0,2* TNT)+ (0,4* ND)+(0,4* NF);

  	if ((NA>=80)||(NA<=100))
   Huruf = 'A' ;

   if ((NA>=70)||(NA<=79))
   Huruf = 'B' ;

   if ((NA>=60)&&(NA<=69))
   Huruf = 'C' ;

   if ((NA>=50)&&(NA<=59))
   Huruf='D' ;

   if (NA>=50)
   Huruf = 'E' ;

  cout<<"program menghitung mahasiswa/n ";
  cout<<"-------------------------------/n";
  cout<<"Nama = "<< Nama <<endl;
  cout<<"Nim = "<< Nama <<endl;
  cout<<"Nilai Akhir = "<< NA <<endl;
  cout<<"Nilai Huruf = "<<Huruf <<endl;
  cout<<"-------------------------------/n";

  getch () ;
}
#include <iostream>
using namespace std;
int main () {
double a,b,c,d;
char x[100];
cout <<"||===========Menghitung Nilai Akhir=========||\n";
cout <<"\n";
cout <<" Masukkan Nama Anda :";
cin.getline(x,100);
cout <<" Masukkan Nilai UAS :";
cin >>a;
cout <<" Masukkan Nilai UTS :";
cin >>b;
cout <<" Masukkan Nilai Tugas :";
cin >>c;
d = (0.4*a) + (0.3*b) + (0.3*c);
if (d>=80)
	
{
cout <<"\n";
cout << "Selamat" <<" "<< x <<","<<"\n";
cout << " Anda mendapatkan nilai A,dengan jumlah nilai "<< d <<"\n";
cout << " Anda Lulus\n";
cout << "Selamat Anda bisa melanjutkan ke semester selanjutnya \n";
}

else if (d>=70)
{
	cout <<"\n";
	cout << "Selamat" <<" "<< x <<","<<"\n";
	cout << " Anda mendapatkan nilai B,dengan jumlah nilai "<< d <<"\n";
	cout << " Anda Lulus\n";
	cout << " Anda bisa melanjutkan ke semester selanjutnya \n";
}

else if (d>=60)
{
	cout <<"\n";
	cout << " "<< x <<","<<"\n";
	cout << " Anda mendapatkan nilai C,dengan jumlah nilai "<< d <<"\n";
	cout << " Anda Lulus\n";
	cout << " Anda bisa melanjutkan ke semester selanjutnya,atau mengulanginya tahun depan \n";
}

else if (d>=50)
{
	cout <<"\n";
	cout << " "<< x <<","<<"\n";
	cout << " Anda mendapatkan nilai D,dengan jumlah nilai "<< d <<"\n";
	cout << " Anda Tidak Lulus\n";
	cout << " Silakan mengulanginya tahun depan \n";
}

else if (d<50)
{
	cout <<"\n";
	cout << " "<< x <<","<<"\n";
	cout << " Anda mendapatkan nilai E,dengan jumlah nilai "<< d <<"\n";
	cout << " Anda Tidak Lulus\n";
	cout << " Silakan mengulanginya tahun depan \n";
}
cout <<"\n";

cout <<"||====================================================||\n";
cin.get();

return 0;
}
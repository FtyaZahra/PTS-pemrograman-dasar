#include <iostream>
using namespace std;

int main() {
 int nilai;
 char predikat;
 string keterangan;
 
 cout << "Masukkan Nilai anda : ";
 cin >> nilai;
 
 if (nilai > 92){
  cout << "nilai yang anda masukkan salah\n";
 }else if (nilai > 87){
  predikat = 'A';
 }else if (nilai > 83){
  predikat = 'B';
 }else if (nilai > 79){
  predikat = 'C';
 }else if (nilai <= 79){
  predikat = 'D';
 }
 cout << "Nilai Huruf : " << predikat << keterangan <<endl;
 
}
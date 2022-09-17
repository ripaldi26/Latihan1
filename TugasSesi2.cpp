//..program menghitung harga total
#include <iostream>
using namespace std;
#define harga 4500.02//.. menentukan harga dengan define
int main() {
  float jumlah,total;
  cout <<"Masukkan Jumlah Barang = ";
  cin >> jumlah ;
  total = harga*jumlah;
  cout << "\nYang harus dibayar =\n" << total;
  
  return 0;

}

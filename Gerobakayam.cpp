#include <iostream>
using namespace std;
int main() {

  int bj, bp;
  float dada = 2500, paha = 2000, sayap = 1500;
  char jp;
  cout << " GEROBAK FRIED CHICKEN " << endl;
  cout << "-----------------------" << endl;
  cout << " Kode\tJenis\tHarga" << endl;
  cout << "-----------------------" << endl;
  cout << "   D\tDADA\tRp. " << dada << endl;
  cout << "   P\tPAHA\tRp. " << paha << endl;
  cout << "   S\tSAYAP\tRp. " << sayap << endl;
  cout << "-----------------------" << endl;
  cout << " Banyak Jenis : ";
  cin >> bj;
  for (int a = 1; a <= bj; a++) {
    cout << endl << endl;
    cout << " Jenis ke : " << a << endl;
    cout << " Jenis Potong [D/P/S] : ";
    cin >> jp;
    cout << " Banyak Potong : ";
    cin >> bp;
  }
  cout << endl << endl << endl;
  cout << "\t\t\t\t GEROBAK FRIED CHICKEN" << endl;
  cout << "------------------------------------------------------" << endl;
  cout << "No.\t\tJenis\t\t Harga\t\t Banyak\t\tJumlah" << endl;
  cout << "   \t\tPotong\t\t Satuan\t\t Beli\t\tHarga" << endl;
  cout << "------------------------------------------------------" << endl;
  int jhsayap = sayap * bp, jhdada = dada * bp, jhpaha = paha * bp,
      pjkdada = jhdada * 0.1, pjksayap = jhsayap * 0.1, pjkpaha = jhpaha * 0.1,
      tbdada = jhdada + pjkdada, tbsayap = jhsayap + pjksayap,
      tbpaha = jhpaha + pjkpaha;
  for (int b = 1; b <= bj; b++) {
    cout << b;
    cout << "\t\t ";
    if (jp == 'd' || jp == 'D') {
      cout << "Dada\t\t Rp." << dada;
      cout << "\t\t" << bp;
      cout << "\t\tRp." << jhdada << endl;
      cout << "------------------------------------------------------" << endl;
      cout << "\t\t\t\t\tJumlah bayar : Rp. " << jhdada << endl;
      cout << "\t\t\t\t\tPajak 10%    : Rp. " << pjkdada << endl;
      cout << "\t\t\t\t\tTotal bayar  : Rp. " << tbdada << endl;
      cout << "------------------------------------------------------" << endl;

    } else if (jp == 'p' || jp == 'P') {
      cout << "Paha\t\t Rp." << paha;
      cout << "\t\t" << bp;
      cout << "\t\tRp." << jhpaha << endl;
      cout << "------------------------------------------------------" << endl;
      cout << "\t\t\t\t\tJumlah bayar : Rp. " << jhpaha << endl;
      cout << "\t\t\t\t\tPajak 10%    : Rp. " << pjkpaha << endl;
      cout << "\t\t\t\t\tTotal bayar  : Rp. " << tbpaha << endl;
      cout << "------------------------------------------------------" << endl;

    } else if (jp == 's' || jp == 'S') {
      cout << "Sayap\t\t Rp." << sayap;
      cout << "\t\t" << bp;
      cout << "\t\tRp." << jhsayap << endl;
      cout << "------------------------------------------------------" << endl;
      cout << "\t\t\t\t\tJumlah bayar : Rp. " << jhsayap << endl;
      cout << "\t\t\t\t\tPajak 10%    : Rp. " << pjksayap << endl;
      cout << "\t\t\t\t\tTotal bayar  : Rp. " << tbsayap << endl;
      cout << "------------------------------------------------------" << endl;
    }

    return 0;
  }
}

#include <iostream>
using namespace std;
int main() {
  int r, c, a[50][50], b[50][50], jumlah[50][50],kurang[50][50],kali[50][50], i, j;
  cout << "Masukan Jumlah baris (1 - 50): ";
  cin >> c;
  cout << "Masukan Jumlah kolom (1 - 50): ";
  cin >> r;
  cout << endl << "Masukan matriks pertama: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Matriks a" << i + 1  << j + 1  << " : ";
      cin >> a[i][j];
    }
  cout << endl << "Masukan matriks kedua: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << "Matriks b" << i + 1 << j + 1 << " : ";

      cin >> b[i][j];
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
      jumlah[i][j] = a[i][j] + b[i][j];
  cout << endl << "Penjumlahan kedua matriks: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << jumlah[i][j] << " ";
      if (j == c - 1)
        cout << endl;
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
      kurang[i][j] = a[i][j] - b[i][j];
  cout << endl << "Pengurangan kedua matriks: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << kurang[i][j] << " ";
      if (j == c - 1)
        cout << endl;
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j)
      kali[i][j] = a[i][j] * b[i][j];
  cout << endl << "Perkalian kedua matriks: " << endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      cout << kali[i][j] << " ";
      if (j == c - 1)
        cout << endl;
    }
  return 0;
}

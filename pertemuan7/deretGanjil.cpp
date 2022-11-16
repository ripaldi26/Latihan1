#include <iostream>
using namespace std;
int main(){

  cout << "Program menghitung 10 deret bilangan ganjil"<<endl;
  int a,b,c;
  b = 19 ;
  for(a=1;a<=b;a += 2){
    cout<< a ;
    if(a<b){
      cout << " + ";
    }
    }
  cout << " = ";
  c = (b + 1)/2;
  c = c*c;
  cout << c ;
  
  
  }

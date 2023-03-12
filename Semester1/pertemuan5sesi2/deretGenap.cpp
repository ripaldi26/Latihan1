#include <iostream>
using namespace std;

int main(){
  int a,b,c;
  b = 20;
  for(a = 2;a<b;a += 2){
    cout<< a;
    if(a<b){
      cout<<" + ";
    }
  }
  cout << " = ";
  c = b/2;
  c = (c+1)*c;
  cout << c;
}

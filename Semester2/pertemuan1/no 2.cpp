#include <iostream>
using namespace std;

int main(){
    int w,x,y;
    string buku[50];
    string temp;
    cout <<"Masukkan jumlah buku : ";
    cin >> y;
    for (w = 0; w < y; w++){
        cout <<"Masukkan nomer buku ke-"<<w+1<<" : ";
        cin >> buku[w];
        cout <<endl;
    }
    for (w = 0; w < y;w++){
        for (x = 0; x < y-w-1 ; x++){
            if(buku[x] > buku [x+1]){
                temp = buku[x];
                buku[x] = buku[x+1];
                buku[x+1] = temp;
            }
        }
    }
    cout <<"Urutan Buku setelah diurutkan adalah :"<<endl;
    for (w = 0;w < y;w++){
        cout <<"buku ke = "<<buku[w]<<endl;
    }
    return 0;
}

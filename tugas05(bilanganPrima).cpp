#include<iostream>
using namespace std;

int main()
{

  int nilai,z = 0;
  
  cout<<"masukkan nilai dari 0 - 100 : ";
  cin>>nilai;
  
  if (nilai == 1 || nilai == 0)
  {
    cout<<"Bukan termasuk bilangan prima \n";
  }
  else{
     for (int c=2;c<nilai;c++ )
    {
  
      if(nilai%c==0)
      {
         z++;
      }
    }

    if(z == 0 )
    {
      cout<<"Termasuk Bilangan prima \n";
    }
    else
    {
       cout<<"Bukan termasuk bilangan prima \n";
    }
  }
}

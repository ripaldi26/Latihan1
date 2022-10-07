#include<iostream>
using namespace std;

int main()
{

  int nilai,count=0;
  
  cout<<"masukkan nilai dari 0 - 100 : ";
  cin>>nilai;
  
  if (nilai == 1 || nilai == 0)
  {
    cout<<"Bukan termasuk bilangan prima \n";
  }
  else{
     for (int i=2;i<nilai;i++ )
    {
  
      if(nilai%i==0)
      {
         count++;
      }
    }

    if(count ==0 )
    {
      cout<<"Termasuk Bilangan prima \n";
    }
    else
    {
       cout<<"Bukan termasuk bilangan prima \n";
    }
  }
}

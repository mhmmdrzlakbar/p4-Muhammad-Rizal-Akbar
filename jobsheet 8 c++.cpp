#include <iostream>
using namespace std;

int main(){
int nim[8],i;
for(i=0;i<=7;i++){
cout<<"Masukkan Nilai "<<i+1<<" : ";
cin>>nim[i];
cout<<endl;
for(i=0;i<=7;i++){
cout<<"Nilai ke"<<i+1<<"="<<nim[i]<<endl;
}
cout<<endl;
}
}

/*
 * Escribe un programa que se encargue de comprobar si un número es o no primo.
 * Hecho esto, imprime los números primos entre 1 y 100.
 */
#include<iostream>
using namespace std;
bool es_Primo(int n){
    if(n<=1)return false;
    for(int i=2;i<=n/2;i++){
        if(n%i==0)return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Introduce un numero:"<<endl;
    cin>>n;
    if(es_Primo(n))cout<<"El numero "<<n<<" es Primo"<<endl;
    else cout<<"El numero "<<n<<" NO es Primo"<<endl;
    cout<<"Los numero primos entre 0 y 100 son: "<<endl;
    for(int i=1;i<=100;i++){
        if(es_Primo(i))cout<<i<<endl;
    }
    return 0;
}
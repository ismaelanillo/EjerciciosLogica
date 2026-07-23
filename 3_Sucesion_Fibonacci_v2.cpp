/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */
#include<iostream>
using namespace std;
int main(){
    long long fib,n0,n1;
    n0=0;
    n1=1;
    for(int i=0;i<50;i++){
        cout<<n0<<endl;
        fib=n0+n1;
        n0=n1;
        n1=fib;
    }
    return 0;
    
}
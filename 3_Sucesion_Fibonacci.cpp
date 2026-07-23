/*
 * Escribe un programa que imprima los 50 primeros números de la sucesión
 * de Fibonacci empezando en 0.
 * - La serie Fibonacci se compone por una sucesión de números en
 *   la que el siguiente siempre es la suma de los dos anteriores.
 *   0, 1, 1, 2, 3, 5, 8, 13...
 */
#include<iostream>
using namespace std;
void Fibonacci_Rec(long long i,long long j,int n);
void Fibonacci(int n){
   if (n <= 0) return;
    
    long long i = 0, j = 1;
    cout << i << endl; // Imprime el 0 (1er término)
    
    if (n > 1) {
        Fibonacci_Rec(i, j, n - 1); 
    }
}
void Fibonacci_Rec(long long i,long long j,int n){
    if (n <= 0) return;
    cout<<j<<endl;
    Fibonacci_Rec(j,i+j,n-1);
}
int main(){
    Fibonacci(50);
    return 0;
}
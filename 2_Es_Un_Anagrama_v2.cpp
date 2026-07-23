/*
 * Escribe una función que reciba dos palabras (String) y retorne
 * verdadero o falso (Bool) según sean o no anagramas.
 * - Un Anagrama consiste en formar una palabra reordenando TODAS
 *   las letras de otra palabra inicial.
 * - NO hace falta comprobar que ambas palabras existan.
 * - Dos palabras exactamente iguales no son anagrama.
 */
#include<iostream>
#include<string>
#include<algorithm>
#include <cctype>
using namespace std;
bool Es_Anagrama(string word1, string word2){
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
    if(word1==word2)return false;
    sort(word1.begin(),word1.end());
    sort(word2.begin(),word2.end());
    return word1==word2;
}
int main(){
    string word1,word2;
    cout<<"Introduce la primera palabra:"<<endl;
    cin>>word1;
    cout<<"Introduce la segunda palabra:"<<endl;
    cin>>word2;
    if(Es_Anagrama(word1,word2))
        cout<<"Son Anagramas!"<<endl;
    else
        cout<<"No son Anangramas"<<endl;
    return 0;
}
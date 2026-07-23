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
void ordenar_palabra(string& text){
    int n=text.length();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(text[j]> text[j+1]){
                char aux=text[j];
                text[j]=text[j+1];
                text[j+1]=aux;
            }
        }
    }
}
bool Es_Anagrama(string word1, string word2){
    transform(word1.begin(), word1.end(), word1.begin(), ::tolower);
    transform(word2.begin(), word2.end(), word2.begin(), ::tolower);
    if(word1==word2)return false;
    //Ordenar palabras alfabeticamente y compararlas
    ordenar_palabra(word1);
    ordenar_palabra(word2);
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
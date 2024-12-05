#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
    int a;
    int *p;
    cout << "Inform e o número de inteiros: " << endl;
    cin >> a;
    p = (int *) malloc (a*sizeof(int)); // aloca 'a' números inteiros
    if(!p){ // ou p = NULL */
      cout << "Erro na alocação de memória. Memória insuficiente";
      exit(0);
    }
    for (int i = 0; i < a; i++ ){
        p[i] = i*a;
        cout << p[i] << endl;
    } 
    a = 100;
    p = (int *) realloc(p, a*sizeof(int));

    for (int i = 0; i < a; i++ ){
        p[i] = i*a;
        cout << p[i] << endl;
    } 

    return 0;
}
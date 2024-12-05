#include <iostream>
#include <string>
#include <list>
#include <algorithm>

using namespace std;

int main() {
  string nota, prev_nota = "";
  while (true) {
    cin >> nota;
    if (nota == "FIM" && prev_nota == "FIM") break;
    if (nota == "FIM") {
      prev_nota = nota;
      continue;
    }
    int qnt_notas=0, soma=0, nMin, nMax, tam;
    list<int> notas;
    while (nota != "FIM") {
      if (isdigit(nota[0])){
        notas.push_back(stoi(nota));
        notas.sort(); 
        qnt_notas++;
      } else {
        break;
      }
      cin >> nota;
    }
    if (qnt_notas == 1) {
      cout << notas.front() << endl;
    } else if (qnt_notas == 2) {
      cout << (notas.back() + notas.front())/2 << endl;
    } else {
      nMin = notas.back();
      nMax = notas.front();
      notas.pop_back();
      notas.pop_front();
      tam = notas.size();
      for (int i = 0; i < tam; i++) {
        soma += notas.back();
        notas.pop_back();
      }
      cout << soma/tam << endl;
    }
    prev_nota = nota;
  }
  return 0;
}

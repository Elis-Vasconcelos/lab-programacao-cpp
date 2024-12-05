#include <iostream>
#include <sstream>
#include <unordered_map>

using namespace std;

int main() {
  int L, A, estado;
  string requisicoes, livro, nome;
  unordered_map<string,int> Arquivo;
  
  cin >> L;
  for (int i = 0; i < L; i++) {
    cin >> nome >> estado;
    Arquivo.insert(make_pair(nome, estado));
  }
  
  cin >> A;
  cin.ignore();
  getline(cin, requisicoes);
  stringstream ss(requisicoes);
  while (ss >> livro) {
    if (Arquivo.find(livro) == Arquivo.end()){
      cout << "Nao encontrado" << endl;
    } else if (Arquivo[livro] == 1) {
      cout << "Disponivel" << endl;
    } else if (Arquivo[livro] == 2) {
      cout << "Emprestado" << endl;
    } 
  }
  
  return 0;
}
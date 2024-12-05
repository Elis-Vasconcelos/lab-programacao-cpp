#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool estaEmDup(string x, vector<string> duplicatas) {
    return find(duplicatas.begin(), duplicatas.end(), x) != duplicatas.end();
}

int main() {
  int N;
  vector<string> alfabetica;
  string frase,palavra;

  cin >> N;
  cin.ignore();
  for (int i = 0; i < N; i++) {
    getline(cin,frase);
    stringstream ss(frase);
    while (ss >> palavra) {
      alfabetica.push_back(palavra);
    }
  }

  sort(alfabetica.begin(), alfabetica.end());
  vector<string> duplicatas;
  auto it = alfabetica.begin();
  while (it != alfabetica.end()) {
    auto next_it = adjacent_find(it, alfabetica.end());
    if (next_it != alfabetica.end()) {
      duplicatas.push_back(*next_it);
      it = upper_bound(next_it, alfabetica.end(), *next_it);
    } else {
      break;
    }
  }
  alfabetica.erase(remove_if(alfabetica.begin(), alfabetica.end(), [&duplicatas](string x){ return estaEmDup(x, duplicatas); }), alfabetica.end());
  
  cout << alfabetica.size() << endl;
  for (int i = 0; i < alfabetica.size(); i++) {
    cout << alfabetica[i] << endl;
  }
  return 0;
}

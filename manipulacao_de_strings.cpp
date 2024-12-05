#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
  
  string str1("Elis Oliveira Vasconcelos"), str = "Programação";
  cout << "Tamanhho str: " << str.size() << endl;
  cout << "Tamanhho str1: " << str1.size() << endl;
  cout << "Comprimento str: " << str.length() << "\n";
  cout << "Comprimento str1: " << str1.length() << "\n"; 
  cout << "Capacidade str: " << str.capacity() << "\n"; 
  cout << "Capacidade str1: " << str1.capacity() << "\n";  

   string frase1;
  getline(cin,frase1);
  for (int i = frase1.size(); i >= 0; i--){
    cout << frase1[i];
  } 
  
  string frase1;
  string frase2;
  getline(cin, frase1);
  getline(cin, frase2);
  
  cout << (frase1 == frase2);
  cout << (frase1 != frase2);
  cout << (frase1 <= frase2);
  cout << (frase1 >= frase2);
  cout << (frase1 > frase2);
  cout << (frase1 < frase2);

  
  string frase; char letra; int k = 0;
  cout << "Lance a frase aí: "; getline(cin,frase);
  cout << "Lance a letra aí: "; cin >> letra;
  for(int i = 0; i < frase.length(); i++) {
    if (frase[i] == letra) {
      k++;
    }
  }
  printf("Vezes que %c aparece em '%s' = %d",letra,frase.c_str(), k); 

  string frase;
  getline(cin,frase);
  for (int i = 0; i < frase.length(); i++) {
    if (frase[i] >= 97 && frase[i] <= 122) {
      frase[i] -= 32;
    }
  }
  cout << frase;
  string f2 = "ç, á, ò";
  cout << int(f2);
}

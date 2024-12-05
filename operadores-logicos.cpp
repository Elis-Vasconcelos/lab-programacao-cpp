#include <iostream>

using namespace std;

int main()
{
  int x;
  x = 100;
  cout << "x > 10? " << (x > 10) << endl;
  cout << "x > 10? " << (x < 10) << endl;
  cout << "x = 10? " << (x == 10) << endl;

  cout << "1) a divisão 1 / 2 resulta em " << 1 / 2 << endl;
  cout << "1) a divisão 3 / 2 resulta em " << (float) 3 / 2 << endl;
  cout << "1) a divisão 4 / 2 ==> " << 4 / 2 << endl;
  cout << "1) a divisão 3 / 2 + 1 / 2 resulta em " << 3 / 2 + 1 / 2 << endl;
  cout << "1) a divisão -1 / 2 resulta em " << -1 / 2 << endl;
  cout << "1) a divisão -3 / 2 resulta em " << -3 / 2 << endl;
  return 0;
}
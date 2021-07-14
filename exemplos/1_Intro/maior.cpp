#include <iostream>
using namespace std;

/*CPE - Exemplo 2 topico 1*/
int main() {
  int x, y;

  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;

  if (x > y)
    cout << "O maior numero e o x = " << x << endl;
  else
    cout << "O maior numero e o y = " << y << endl;
    
  return 0;
}

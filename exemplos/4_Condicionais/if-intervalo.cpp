#include <iostream>
using namespace std;

int main(){
	int x;

	cin >> x;

	if(x>0 && x<=5){
		cout << "Cheguei aqui.\n";
		x = x * 6;
		cout << x << endl;
	}else
		cout << "Cheguei ali.\n";
	return 0;
}

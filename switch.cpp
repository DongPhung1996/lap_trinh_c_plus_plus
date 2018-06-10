#include <iostream>
#include <fstream>      

using namespace std;

int main () {
	int a, b;
	cin >> a >> b;
	char k;
	cin >> k;
	switch(k){
		case '+':
			cout << a + b;
			break;
		case '-':
			cout << a - b;
			break;
		case '*':
			cout << a * b;
			break;
		case '/':
			cout << (float)a / b;
			break;	
		case '%':
			cout << (float)a % b;
			break;	
		default:
			cout << "Ky tu nhap vao khong hop le!";
			break;			
	}
	return 0;
}

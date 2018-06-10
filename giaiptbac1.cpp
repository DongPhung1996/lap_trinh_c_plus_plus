#include <iostream>

using namespace std;

int main()
{
	int a;
	cin >> a;
	cout << "Bang cuu chuong " << a << " la:" << endl;
	for(int i = 1; i <= 10; i++) 
	{
		cout << a << " * " << i << " = " << a * i << endl;
	}	
}

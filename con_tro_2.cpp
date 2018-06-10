#include <iostream>

using namespace std;

int main ()
{
	int i,n;  
	int * p;
	cout << "So phan tu ban muon nhap vao: ";
	cin >> i;
	p= new int[i];
	if (p == 0)
		cout << "Khong co phan tu nao duoc tao!";
	else
	{
		for (n=0; n<i; n++)
		{
			cout << "Moi ban nhap: ";
			cin >> p[n];
		}
		cout << "Cac so ban da nhap: ";
		for (n=0; n<i; n++)
			cout << p[n] << ", ";
		delete[] p;
	}
	return 0;
}	

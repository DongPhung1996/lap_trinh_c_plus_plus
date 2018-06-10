#include <iostream>

using namespace std;

int main(){
	int a[10];
	int s = 0;
	for(int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	for(int i = 0; i < 10; i++)
	{
		s += a[i];
	}
	int max;
	max = a[0];
	for(int i = 0; i < 10; i++)
	{
		if(max < a[i])
		{
			max = a[i];
		}
	}
	cout << s << endl;
	cout << "Phan tu lon nhat la: " << max;
}

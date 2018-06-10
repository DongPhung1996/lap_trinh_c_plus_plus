#include <iostream>

using namespace std;

int main(){
	int arr[10];
	int i, j;
	for(i = 0; i < 10; i++){
		cin >> arr[i];
	}
	cout << "Sap xep tu be den lon la: " << endl;
	int temp;
	for(i = 0; i < 10; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			if(arr[i] > arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << "Sap xep tu lon den be la: " << endl;
	for(i = 0; i < 9; i++)
	{
		for(j = i + 1; j < 10; j++)
		{
			if(arr[i] < arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for(i = 0; i < 10; i++)
	{
		cout << arr[i] << "\t";
	}
}

#include <iostream>
#include <cstdlib>

using namespace std;

gameDoanSo()
{
	int soMayDoan;
	int soNguoiDoan;
	int soLanDoan = 0;
	soMayDoan = rand()%101;
	cout << "May dang doan mot so tu 10 den 100!" << endl;
	cout << "Moi ban doan " << endl;
	while(true)
	{
		cin >> soNguoiDoan;
		soLanDoan++;
		cout << "So lan doan: " << soLanDoan << endl;
		if(soNguoiDoan == soMayDoan)
		{
			cout << "Ban doan dung roi! Tro choi ket thuc!" << endl;
			break;
		}
		else if(soNguoiDoan > soMayDoan)
		{
			cout << "Ban doan lon hon so may doan" << endl;
			cout << "Moi ban tiep tuc!" << endl;
		}
		else
		{
			cout << "Ban doan nho hon so may doan" << endl;
			cout << "Moi ban tiep tuc!" << endl;
		}
		if(soLanDoan >= 8)
		{
			cout << "Tro choi ket thuc!" << endl;
			cout << "So cua may doan la: " << soMayDoan << endl;
			break;
		}	
	}
}

void dectobin(int n){
     if (n > 0){
        dectobin(n/2);
        cout <<n%2;
     }
}
    
int main()
{
	cout <<"Nhap n: "; int n; cin >>n;
    cout <<"Chuyen co so: "; dectobin(n);
    return 0;
	while(true)
	{
		gameDoanSo();
		char s;
		cout << "Ban co muon tiep tuc: " << endl;
		cin >> s;
		if(s == 'n')
			break;
	}
}

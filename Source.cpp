#include <iostream>

using namespace std;
int tong(int a, int b) {
	return a - b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int hieu(int a,int b)
{
	return a-b;
}

int tich(int a, int b)
{
	return a * b;
}

bool SNT(int n)
{
	if (n < 2)
		return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
			return false;
	}	
	return true;
}

int main()
{
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	int a = 10,b=5;// Phan nay cua Khang lam.
	cout << "Hieu cua " << a << " va " << b << " la: " << hieu(a,b) << endl; // Phan nay cua Khang lam.
	cout << "Tich cua " << a << " va " << b << " la: " << tich(a, b) << endl; 
	if (SNT(a) == true)
		cout << "La so nguyen to";
	else
		cout << "Khong phai so nguyen to";
	system("pause");
	return 0;
}
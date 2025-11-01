#include <iostream>

using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);

int hieu(int a,int b)
{
	return a-b;
}
int main()
{
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	int a = 10,b=5;// Phan nay cua Khang lam.
	cout << "Hieu cua " << a << " va " << b << " la: " << hieu(a,b) << endl; // Phan nay cua Khang lam.
	system("pause");
	return 0;
}
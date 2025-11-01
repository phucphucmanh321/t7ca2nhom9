#include <iostream>

using namespace std;
int tong(int a, int b) {
	return a - b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
bool kiemTraSoAmDuong(int n) {
	return n % 2 ? true : false;
}
int hieu(int a,int b)
{
	return a-b;
}
int main()
{
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	int a = 10, b=-5;// Phan nay cua Khang lam.
	cout << "Hiệu của " << a << " và " << b << " là: " << hieu(a,b) << endl; // Phan nay cua Khang lam.
	cout << "a là số " << kiemTraSoAmDuong(a) ? "Số dương" : "Số âm"<< "\n";
	cout << "b là số " << kiemTraSoAmDuong(b) ? "Số dương" : "Số âm"<< "\n";
	system("pause");
	return 0;
}
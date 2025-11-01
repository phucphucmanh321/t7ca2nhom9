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

int soChanLe(int a)
{
	if(a%2==0)
		return 1; // so chan
	else
		return 0; // so le
}
int main()
{
	
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Tong =";
	int a = 10,b=5;// Phan nay cua Khang lam.
	cout << "Hieu cua " << a << " va " << b << " la: " << hieu(a,b) << endl; // Phan nay cua Khang lam.
	count << "Kiem tra so chan le cua " << a << " : "; // Phan nay cua Khang lam.
	if(soChanLe(a)==1)
		cout << a << " la so chan" << endl;
	else
		cout << a << " la so le" << endl;
	system("pause");
	return 0;
}
+
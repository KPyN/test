#include <iostream>
using namespace std;
<<<<<<< HEAD
int tong(int a, int b);
int hieu(int a, int b){
	return a-b;
};
=======
int tong(int a, int b){
	return a+b;
};
int hieu(int a, int b);
>>>>>>> refs/remotes/origin/main
int tich(int a,b){
	return a*b;
};
int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
<<<<<<< HEAD
	if(phepToan == '-')
		cout<<"Hieu la: "<<hieu(a,b)<<endl;
=======
	if(phepToan == '+')
		cout<<"Tong la: "<<tong(a,b)<<endl;
>>>>>>> refs/remotes/origin/main
	if(phepToan == '*')
		cout<<"Tich la: "<<tich(a,b)<<endl;
	system("pause");
	return 0;
}
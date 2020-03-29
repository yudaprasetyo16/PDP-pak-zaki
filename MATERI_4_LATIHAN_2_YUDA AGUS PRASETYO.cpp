#include <iostream>
using namespace std;
int main()
{
	int jml;
	cout<<"masukkan jumlah deret angka = ";
	cin>> jml;
	string deret_angka[100] = {};
	for (int i = 0; i < jml; i++)
	{
		cout<<"masukkan angka ke "<<i +1<< " = ";
		cin>> deret_angka[i];
	}
	for (int j = 0; j < jml; j++)
	{
		cout<<"deret angka ke "<< j + 1 << " adalah "<< deret_angka[j]<<endl;
		
	}
	system("pause");
	return 0;
}

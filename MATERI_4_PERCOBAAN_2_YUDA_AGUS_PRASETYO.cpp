#include <iostream>

using namespace std;

int main()
{
	int i = 1, j = 1;
	
	while(i<20)
	{
		cout<<"Nilai i saat ini = "<<i<<endl;
		i = i * 5 - 1;
		
	}
	
	do {
		cout<<"Nilai j saat ini = "<<j<<endl;
		j = j * 5 - 1;
	}while (j<20);
	
	system("pause");
	return 0;
}

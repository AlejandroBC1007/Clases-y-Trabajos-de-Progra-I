#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	char x[4][4];
	for (int i=0; i<=2;i++)
	{
		for(int j=2; j>=0; j--)
		{
		 	x[i][j]='x';
	    }
	}
	for (int i=0; i<=3; i++)
	{
	x[0][3]=3;
	if (i=3)
	{
		x[3][2]=3;
		x[3][3]=3;
	}
    }
	cout<<x[0][1]<<endl;
	system("pause");
	return 0;
}

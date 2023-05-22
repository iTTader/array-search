#include <iostream>
#include <tchar.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
cout<<"What number to look for ";
int m = 666;
cin >> m;
int i;
int a;
int b;
a = 0;
const int size = 1000;
b = size;
int A[size];
for (i=1; i < size; i++) {
	A[i - 1] = i;
}
while (b > a){

	if (A[(a + b) / 2] > m){
		b = (a + b) / 2 - 1;
	}

	else if (A[( a + b ) / 2] < m){
	a = (a + b) / 2 + 1;
	}

	else{
	cout<<"we found!";
	break;
	}
}

system("pause");
}


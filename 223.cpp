#include<iostream>
using namespace std;

//specific Function
void Swap(char *p, char *q)
{
	char temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

//Generic Function
template<class T>
void SwapX(T *p, T *q)
{
	T temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
}

int main()
{
	char x = 'A',y = 'B';
	SwapX(&x,&y);
	
	cout<<"value of x becomes "<<x<<"\n";
	cout<<"value of y becomes "<<y<<"\n";
	
	int i = 11,j = 21;
	SwapX(&i,&j);
	
	cout<<"Value of x becomes : "<<i<<"\n";
	cout<<"Value of y becomes : "<<j<<"\n";
	
	return 0;
}

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
	char x = '\0',y = '\0';
	
	cout<<"Enter first no\n";
	cin>>x;
	
	cout<<"enter second no\n";
	cin>>y;
	
	SwapX(&x,&y);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	return 0;
}

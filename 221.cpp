#include<iostream>
using namespace std;

void Swap(char *p, char *q)
{
	char temp;
	
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
	
	Swap(&x,&y);
	
	cout<<"Value of x becomes : "<<x<<"\n";
	cout<<"Value of y becomes : "<<y<<"\n";
	
	return 0;
}

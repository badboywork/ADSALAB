#include<iostream>
using namespace std;
//#include<conio.h>
int fib(int x)
{
	if((x==1)||(x==0))
	{
		return (x);
	}
	else
	{
		return (fib(x-1)+fib(x-2));
	}
}
int main()
{
	int x,i=0;
	cout<<"\n enter the number\n";
	cin>>x;
	cout<<"\n fibonacci series\n";
	while(i<x)
	{
		cout<<" "<<fib(i);
		i++;
	}
	return 0;
}

#include<iostream>
using namespace std;
void fib(int num)
{
	int x=0,y=1,z;
	for(int i=0;i<num;i++)
	{
		cout<<x<<"";
		cout<<"\n";
		z=x+y;
		x=y;
		y=z;
	}
}
int main()
{
	int num;
	cout<<"Enter the number :";
	cin>>num;
	cout<<"\n fibonacci series :";
	fib(num);
	return 0;
}

//wap to find the combination between two numbers

#include<iostream>
using namespace std;

int factorial(int n);
int main()
{
	int n,r,combination;
	cout<<"enter the value for n and r respectively:"<<endl;
	cin>>n>>r;
	combination=(factorial(n)/((factorial(r))*factorial(n-r)));
	cout<<"the combination of the given input number is: "<<combination;
	return 0;
}
int factorial(int n)
{
	if(n==0)
	{
		return 1;
	}
	else{
		return n*factorial(n-1);
	}
}

// wap to implement euclidean and extended euclidean algorithm to find the gcd between two numbers.

#include<iostream>
using namespace std;
int main()
{
	int a,b,r;
	cout<<"Enter two numbers to calculate GCD:"<<endl;
	cin>>a>>b;
	while(b=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	cout<<"the GCD of Given two numbers is:"<<a;
	return 0;
}

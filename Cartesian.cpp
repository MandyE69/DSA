//wap to compute Cartesian product of 2 set

#include<iostream>
using namespace std;

int main()
{
	int a[10],b[10],n1,n2;
	cout<<"Enter size of set A :";
	cin>>n1;
	cout<<"\nEnter element of set A :\n";
	for (int i=0;i<n1;i++)
	
		cin>>a[i];
		cout<<"Enter a size of set B :";
		cin>>n2;
		cout<<"\nEnter element of set B :\n";

			for(int i=0;i<n2;i++)
		
			cin>>b[i];
			cout<<"{";
	
	for(int i=0;i<n1;i++)
	{
		for(int j=0;j<n2;j++)
		{
			cout<<"("<<a[i]<<","<<b[j]<<")";	
		}
	}
	cout<<"}";
	return 0;
}

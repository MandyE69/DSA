//wap to generates permutation.
#include<iostream>
using namespace std;
int pmu(int n, int r)
{
	int permutation=1;
	int start=n-r+1;
	for(start;start<=n;start++)
	{
		permutation*=start;
	}
	return permutation;
}

int main()
{
	int n,r;
	cout<<"enter n and r:\n";
	cin>>n>>r;
	cout<<"permutation is:"<<pmu(n,r);
	return 0;
}

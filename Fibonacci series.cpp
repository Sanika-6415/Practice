#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value of n : ";
	cin>>n;
	int a=0,b=1;
	cout<<a<<" "<<b;
	int nt;
	for(int i=2;i<n;i++)
	{
		nt=a+b;
		a=b;
		b=nt;
		cout<<" "<<nt;
	}
	
	return 0;
}

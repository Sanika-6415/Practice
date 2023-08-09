#include<iostream>
using namespace std;

int main()
{
	int num,sum=0;
	cout<<"Enter the number : ";
	cin>>num;
	
	for(int i=1;i<=num/2;i++)
	{
		if((num%i)==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		cout<<"\nThe given number is a perfect number";
	}
	else
	{
		cout<<"\nThe given number is not a perfect number";
	}
	return 0;
}

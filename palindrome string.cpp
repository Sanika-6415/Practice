#include<iostream>
using namespace std;

int main()
{
	string str;
	
	cout<<"Enter the string : ";
	cin>>str;
	
	int len=str.length(),j=0,i;
	
	for(i=0;i<len/2;i++)
	{
		if(str[i]==str[len-i-1])
		{
			j++;
		}
	}
	
	if(i==j)
	{
		cout<<"\nString is palindrome";
	}
	else
	{
		cout<<"\nString is not palindrome";
	}
	return 0;
}

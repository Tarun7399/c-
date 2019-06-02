#include<iostream>
using namespace std;
int main()
{
	int i;
	char a[50];
	cin>>a;
	char b,c;
	cin>>b>>c;
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b)
		{
			a[i]=c;
			continue;
		}
		if(a[i]==c)
		{
			a[i]=b;
			continue;
		}
	}
	cout<<a;
	return 0;
}
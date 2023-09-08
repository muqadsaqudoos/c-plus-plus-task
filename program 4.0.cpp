#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int n;
	cout<<"Enter three digits number:";
	cin>>n;
	cout<<"The reverse number is:";
	cout<<n%10;
	n=n/10;
	cout<<n%10;
	n=n/10;
	cout<<n%10<<"\n";
	system("pause");
	return 0;

}

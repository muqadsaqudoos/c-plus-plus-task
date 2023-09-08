#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int hour;
	cout<<"Enter time in hours=";
	cin>>hour;
	cout<<"Time in minutes="<<hour*60<<"\n";
	cout<<"Time in seconds="<<hour*3600<<"\n";
	system("pause");
	return 0;
}

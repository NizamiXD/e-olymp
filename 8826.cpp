#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
	y=x - (x*x + 4)/2 + pow(x,3) - 3/(x+7);
	cout<<y<<endl;
}
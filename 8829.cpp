#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
	y=(2*x)/(sqrt(x*x + 1)) - sqrt(x*x + 1)/(x*x*x);
	cout<<y<<endl;
}
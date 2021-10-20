#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
	cout<<(x*x - 2*x*y + 4*y*y)/(x+5) + (3*x*x - y*y)/(y-7)<<endl;
}
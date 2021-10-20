#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
	cout<< sqrt(x*x + y*y)/pow((x-y), 2) - 2*x*y/(sqrt(x*x + y*y)) <<endl;
}
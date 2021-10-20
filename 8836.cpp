#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x>>y;
	cout<< pow((x-y), 2)/sqrt(x*x + y*y - 1) + sqrt(x*x+y*y-1)/(2*x*y) <<endl;
}
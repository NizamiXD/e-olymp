#include<bits/stdc++.h>
using namespace std;
int main()
{
	double x,y;
	cin>>x;
	y=(sqrt(pow(x,4) + 1)/(x*x)) - sqrt(pow(x, 2)/(pow(x,2) + 1));
	cout<<y<<endl;
}
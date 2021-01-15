//线性方程组————高斯消去法
#include<iostream>
#include<cmath>
using namespace std;
	
int main()
{
	double x1;
	double x2;
	double x3;
    cin>>x1>>x2>>x3;
	double x11=-0.4*x2-0.2*x3-2.4;
	double x22=0.25*x1-0.5*x3+5;
	double x33=-0.2*x1+0.3*x2+0.3;
	cout<< "x1=" << x11 <<"x2="<<x22<<"x3="<<x33<<endl;
	return 0;
}
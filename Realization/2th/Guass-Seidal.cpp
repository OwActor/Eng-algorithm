//线性方程组————高斯-赛德尔迭代法
#include<iostream>
#include<cmath>
using namespace std;
double f(double x1,double x2,double x3,double E)
{
	double x11,x22,x33;
    x11=-0.4*x2-0.2*x3-2.4;            //需要更改对应的迭代矩阵
	x22=0.25*x11-0.5*x3+5;
	x33=-0.2*x11+0.3*x22+0.3;
	
	if(fabs(x11-x1)<E || fabs(x22-x2)<E || fabs(x33-x3)<E){
		cout<< "x1=" << x11 <<" x2="<<x22<<" x3="<<x33<<endl;
		cout<<"完成"<<endl;
	}else{
		cout<< "x1=" << x11 <<" x2="<<x22<<" x3="<<x33<<endl;
		f(x11,x22,x33,E);
	}
	return 0;
	
}
	
int main()
{
	double x1,x2,x3;
	double E;
	cout<< "请输入初始矩阵：X0=";
    cin>> x1 >> x2 >> x3;
	cout<< "请输入允许误差（半单位）：E=";
	cin>> E;
	f(x1,x2,x3,E);
	cin.get();
	cin.get();
	return 0;
}

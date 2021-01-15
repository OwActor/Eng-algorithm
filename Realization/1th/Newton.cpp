//非线性方程————牛顿法；简易牛顿法
#include<iostream>
#include<cmath>
using namespace std;
                     
double f(double xx)            
{
    double result=9600-9600*exp(-xx/15)-480*xx;
    return result;                 //需要更改为对应非线性方程
}

double df(double xx)
{
    double result=640*exp(-xx/15)-480;
    return result;                 //需要更改为对应非线性方程的导数
}

double funcation(double xx,double EE,int nn)
{
    double xx_1=xx-f(xx)/df(xx); //需要更改为对应非线性方程
    if(fabs(xx_1-xx)>EE)
    {
        cout.precision(15);
        cout << "第" << nn <<"次迭代:X" << nn <<"=" << xx_1 <<endl;
        nn=nn+1;
        funcation(xx_1,EE,nn);
    }else{
        cout.precision(15);
        cout << "第" << nn <<"次迭代:X" << nn <<"=" << xx_1 <<endl;
        cout << "求解完成" <<endl;
    }
    return 0;
}

int main()
{
    double d_orivalue_x;
    double d_error_E;
    int n=1;     
    cout << "输入迭代初始值:x=";
    cin >> d_orivalue_x;
    cout << "输入允许误差（半单位值）：E=";
    cin >> d_error_E;
    cout << "输入完成" <<endl;
    funcation(d_orivalue_x,d_error_E,n);
    cin.get();
    cin.get();
    return 0;
}
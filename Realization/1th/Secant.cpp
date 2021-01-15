//非线性方程————弦截法
#include<iostream>
#include<cmath>
using namespace std;
                     
double f(double xx)            
{
    double result=pow(xx,3)-2*pow(xx,2)-4*xx-7;
    return result;                 //需要更改为对应非线性方程
}

double funcation(double xx_0,double xx_1,double EE,int nn)
{
    double xx_2=xx_1-f(xx_1)*(xx_1-xx_0)/(f(xx_1)-f(xx_0)); //需要更改为对应迭代方程（需要满足收敛条件） 
    if(fabs(xx_2-xx_1)>EE)
    {
        cout.precision(15);
        cout << "第" << nn-1 <<"次弦截:X" << nn <<"=" << xx_2 <<endl;
        xx_0=xx_1;
        xx_1=xx_2;
        nn=nn+1;
        funcation(xx_0,xx_1,EE,nn);
    }else{
        cout.precision(15);
        cout << "第" << nn-1 <<"次弦截:X" << nn <<"=" << xx_2 <<endl;
        cout << "求解完成" <<endl;
    }
    return 0;
}

int main()
{
    double d_orivalue_x0;
    double d_orivalue_x1;
    double d_error_E;
    int n=2;     
    cout << "输入弦截初始值:x0=";
    cin >> d_orivalue_x0;
    cout << "输入弦截初始值:x1=";
    cin >> d_orivalue_x1;
    cout << "输入允许误差（半单位值）：E=";
    cin >> d_error_E;
    cout << "输入完成" <<endl;
    funcation(d_orivalue_x0,d_orivalue_x1,d_error_E,n);
    cin.get();
    cin.get();
    return 0;
}
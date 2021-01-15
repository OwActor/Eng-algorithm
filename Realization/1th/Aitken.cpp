//非线性方程————埃利金加速法
#include<iostream>
#include<cmath>
using namespace std;
                     
double f(double xx)            
{
    double result=pow(xx,3)-2*pow(xx,2)-3*xx-7;
    return result;                 //需要更改为对应迭代方程
}

double funcation(double xx,double EE,int nn)
{
    double yy=f(xx);
    double zz=f(yy);
    double xx_1=xx-pow(yy-xx,2)/(zz-2*yy+xx); //需要更改为对应迭代方程（需要满足收敛条件）
    if(fabs(xx_1-xx)>EE)
    {
        cout.precision(15);
        cout << "第" << nn <<"次迭代:X" << nn <<"=" << xx_1 <<" Y" << nn <<"="<< yy <<" Z" << nn <<"="<< zz <<endl;
        nn=nn+1;
        funcation(xx_1,EE,nn);
    }else{
        cout.precision(15);
        cout << "第" << nn <<"次迭代:X" << nn <<"=" << xx_1 <<" Y" << nn <<"="<< yy <<" Z" << nn <<"="<< zz <<endl;
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
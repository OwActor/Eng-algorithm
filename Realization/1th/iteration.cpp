//非线性方程————迭代法
#include<iostream>
#include<cmath>
using namespace std;
                     
double funcation(double xx,double EE,int nn)
{
    double xx_1=cos(xx);       //需要更改为对应迭代方程
    if(fabs(xx_1-xx)>EE){
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
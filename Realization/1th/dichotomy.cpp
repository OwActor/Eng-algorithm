//非线性方程————二分法
#include<iostream>
#include<cmath>
using namespace std;

double f(double xx)
{
    double result=pow(xx,3)+xx-4;    //需要更改对应非线性方程
    return result;
}

double funcation(double aa,double bb,double cc,double EE,int nn)
{
    cc=(aa+bb)/2;
    if(f(aa)*f(cc)>0){
        aa=cc;
    }else{
        bb=cc;
    }
    if(fabs(aa-bb)>EE){
        cout.precision(15);
        cout << "第"<< nn <<"次二分 a=" << aa <<" b=" << bb <<" X"<< nn <<"="<< cc <<" f(X)="<< f(cc) <<endl;
        nn=nn+1;
        funcation(aa,bb,cc,EE,nn);
    }else{
        cout.precision(15);
        cout << "第"<< nn <<"次二分 a=" << aa <<" b=" << bb <<" X"<< nn <<"="<< cc <<" f(X)="<< f(cc) <<endl;
        cout << "求解完成"<<endl;
    }
    return 0;
}

int main()
{
    double d_section_a;
    double d_section_b;
    double d_error_E;
    cout << "输入二分区间下限：a=";
    cin >> d_section_a;
    cout << "输入二分区间上限：b=";
    cin >> d_section_b;
    cout << "输入允许误差（半单位值）：E=";
    cin >> d_error_E;
    cout << "输入完成"<< endl;
    int n=1;        //认为a0与b0决定的X为第一次二分//
    double d_midvalue_c=0;
    funcation(d_section_a,d_section_b,d_midvalue_c,d_error_E,n);
    cin.get();
    cin.get();
    return 0;
}
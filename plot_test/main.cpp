#include <bits/stdc++.h>

using namespace std;

//const double M_PI=3.14159265358979323846;

double f(double x){
    return x*x/100;
}

double g(double x){
    return x*x*4*3.14*3.14*(375.1+376.1);
}

double h(double x){
    return x*10.2*9.82*pow(pow(0.003/x,2)+pow(0.1/10.2,2),0.5);
}



int main()
{
    freopen("input.txt","r",stdin);
    freopen("../datafile.dat","w",stdout);
    int n=13;
    double x,y;
    for (int j=0;j<1;j++){
        double a[n],b[n],m[n];
        for (int i=0;i<n;i++){
            cin >> x >> y;
            b[i]=x;
            m[i]=y;
            a[i]=49-b[i];
            double d=pow(pow(0.5/(x/10),2)+pow((0.1+0.1)/(375.7+376.1),2)+4*pow(0.1/y,2),0.5);
            cout << fixed << setprecision(6) << f(x) << " " << g(y) << " " << d << " " << d << "\n";
        }
        cout << "\n\n";
        double f[n];
        for (int i=0;i<n;i++){
            f[i]=2*9.82*10.2*148.3*m[i]/a[i];
        }
        double f_s=0;
        for (int i=0;i<n;i++){
            f_s+=f[i];
        }
        f_s/=9;
//        cout << f_s << "\n\n";
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
double F(double x,double y)
{
    return x+y*y;
}
int main()
{
    double y0,x0,y1,n,h,f,k1,k2,k3,k4;

    printf("\nEnter the value of x0: ");
    scanf("%lf",&x0);
    printf("\nEnter the value of y0: ");
    scanf("%lf",&y0);
    printf("\nEnter the value of h: ");
    scanf("%lf",&h);
    printf("\nEnter the value of last point: ");
    scanf("%lf",&n);
    for(; x0<n; x0=x0+h)
    {
        f=F(x0,y0);
        k1 =  f;
        k2 = F(x0+h/2,y0+(k1*h)/2);

        k3 = F(x0+h/2,y0+(k2*h)/2);

        k4 = F(x0+h,y0+k3*h);

        y1 = y0 + (( k1 + 2*k2 + 2*k3 + k4)/6)*h;
        printf("\n\n  k1 = %.4lf  ",k1);
        printf("\n\n  k2 = %.4lf ",k2);
        printf("\n\n  k3 = %.4lf ",k3);
        printf("\n\n  k4 = %.4lf ",k4);
        printf("\n\n  y(%.4lf) = %lf ",x0+h,y1);
        y0=y1;
    }

}

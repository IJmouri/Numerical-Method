#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (x/(x+1));
}
int main()
{
    int i;
    double n,a,b,h,y[20],s,ans,x[20];
    printf("\n Enter values of a,b,n: ");
    scanf("%lf%lf%lf",&a,&b,&n);
    h=(b-a)/n;

    printf("\n Y values: \n");
    for(i=0; i<=n; i++)
    {
        x[i]=a+i*h;
        y[i]=f(x[i]);
        printf("\n %lf\n",y[i]);
    }
    s=0;
    for(i=1; i<n; i++)
    {
        s=s+y[i];
    }
    ans=h/2.0*(y[0]+y[(int)n]+2*s);
    printf("\n Final integration is %.3lf\n",ans);


}

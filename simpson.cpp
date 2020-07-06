#include<bits/stdc++.h>
using namespace std;
double f(double x)
{
    return (1/(x));
}
int main()
{
    int i;
    double n,a,b,h,y[20],so,se,ans,x[20];
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
    so=0;
    se=0;
    for(i=1; i<n; i++)
    {
        if(i%2==1)
        {
            so=so+y[i];
        }
        else
        {
            se=se+y[i];
        }

    }
    ans=h/3.0*(y[0]+y[(int)n]+4*so+2*se);
    printf("\n Final integration is %.3lf\n",ans);


}

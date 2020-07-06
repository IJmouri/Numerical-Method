#include<bits/stdc++.h>
using namespace std;
double f(double x1,double y1)
{
    return 1-y1;
}
int main()
{
    double h,x[20],y[20],n;
    int i;
    printf("Enter the value of x0,y0,n\n");
    scanf("%lf%lf%lf",&x[0],&y[0],&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&x[i]);
    }
    h=x[1]-x[0];
    for(i=1;i<=n;i++)
    {
        y[i]=y[i-1]+h*f(x[i-1],y[i-1]);
        cout<<y[i]<<endl;
    }
}

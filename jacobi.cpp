#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    float x[100],y[100],z[100];
    printf("Number of iteration:");
    scanf("%d",&n);
    scanf("%f, %f, %f",&x[0],&y[0],&z[0]);
    for(i=0;i<n;i++)
    {
        x[i+1]=(12-2*y[i]-z[i])/5;
        y[i+1]=(15-x[i]-2*z[i])/4;
        z[i+1]=(20-x[i]-2*y[i])/5;
    }
    for(i=1;i<=n;i++)
    {
        printf("For iteration %d\n",i);
        printf("x=%f, y=%f & z=%f\n",x[i],y[i],z[i]);
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{

    float inv[3][3];
    int mat[3][4], i, j;
    float determinant = 0;

    printf("Enter elements of matrix row wise:\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j <= 3; j++)
            scanf("%d", &mat[i][j]);

    printf("\nGiven matrix is:");
    for(i = 0; i < 3; i++)
    {
        printf("\n");

        for(j = 0; j <= 3; j++)
            printf("%d\t", mat[i][j]);
    }

    //finding determinant
    for(i = 0; i < 3; i++)
        determinant = determinant + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));

    printf("\n\ndeterminant: %f\n", determinant);

    printf("\nInverse of matrix is: \n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            inv[i][j]=((mat[(j+1)%3][(i+1)%3] * mat[(j+2)%3][(i+2)%3]) - (mat[(j+1)%3][(i+2)%3] * mat[(j+2)%3][(i+1)%3]));
            printf("%.2f\t",inv[i][j]);
        }
        cout<<endl;
    }
    float x=inv[0][0]*mat[0][3]+inv[0][1]*mat[1][3]+inv[0][2]*mat[2][3];
    float y=inv[1][0]*mat[0][3]+inv[1][1]*mat[1][3]+inv[1][2]*mat[2][3];
    float z=inv[2][0]*mat[0][3]+inv[2][1]*mat[1][3]+inv[2][2]*mat[2][3];
    cout<<"X = "<<x/determinant<<endl;
    cout<<"y = "<<y/determinant<<endl;
    cout<<"Z = "<<z/determinant<<endl;



    return 0;
}


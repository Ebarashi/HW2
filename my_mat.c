#include"my_mat.h"
#include<limits.h>
#include<stdio.h>


#define MIN(X, Y) X <Y ? X : Y

//func A to recicve a new mat
int getMat(int mat[10][10])
{
    for(int i=0; i<10;i++)
    {
        for(int j=0; j<10;j++)
        {
            mat[i][j]=-100;
            do{
                scanf("%d",&mat[i][j]);char c; scanf("%c",&c);
            }while(mat[i][j] < -1);
        }
    }
}


//func B is there a rout
int isThereRoute(int mat[10][10], int i, int j)
{
    return mat[i][j] > 0 ? 1 : 0;
}

//func c what is the smallest rout
int smallestRoute(int mat[10][10], int i, int j)
{
    if(mat[i][j]==0){printf("-1");}
    else {printf("%d\n",mat[i][j]);}
}

int updateMat(int mat[10][10])
{
    int infinity = INT_MAX;
        for(int k=1; k<=10; k++)
        {
            for(int i=1; i<=10; i++)
            {
                for(int j=1; j<=10; j++)
                {
                mat[i][j] = 0 ? infinity : mat[i][j];
                mat[i][k] = 0 ? infinity : mat[i][k];
                mat[k][j] = 0 ? infinity : mat[k][j]; 
                mat[i][j] = MIN(mat[i][j],(mat[i][k]+mat[k][j]));
                mat[i][j] = infinity ? mat [i][j]=0 : mat[i][j];
                mat[i][k] = 0;
                mat[k][j] = 0;
                }
            }
        }
    return 0;
}





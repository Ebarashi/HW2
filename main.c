#include<stdio.h>
#include"my_mat.h"



int main()
{
    int mat[10][10]={0};
    char in='D';
    int i, j, temp;
    do{
        scanf("%c",&in);
        switch (in)
        {
            case 'A':
                getMat(mat);
                updateMat(mat);
                break;

            case 'B':
                scanf("%d",&i);
                scanf("%d",&j);
                temp=isThereRoute(mat, i, j);
                if (temp==1){printf("true\n");}
                else printf("false\n");
                break;

            case 'C':
                scanf("%d",&i);
                scanf("%d",&j);
                temp=smallestRoute(mat, i, j);
                if (temp!=0){printf("%d\n",temp);}
                else printf("%d\n",-1);
                break;

            case 'D':
                break;

            default:
                break;
        }

    }while(in != 'D');
    return 0;
}
#include <stdio.h>
int main()
{

    int m, n;
    printf("Enter order of the matrix with spaces:\n");
    scanf("%d %d",&m,&n);
    int i, j;
    int mat1[m][n], mat2[m][n], mat3[m][n], mat4[m][n];
    printf("Enter the matrix 1:\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",*(mat1+i)+j);
    }
    printf("Enter the matrix 2:\n");
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
            scanf("%d",*(mat2+i)+j);
    }

    printf("\nAddition of matrices\n");

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            *(*(mat3+i)+j) = *(*(mat1+i)+j) + *(*(mat2+i)+j);
            printf("%d ",*(*(mat3+i)+j));
        }
        printf("\n");

    }

    printf("\nSubtraction of matrices\n");
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
             *(*(mat4+i)+j) = *(*(mat1+i)+j) - *(*(mat2+i)+j);
            printf("%d ",*(*(mat4+i)+j));
        }
        printf("\n");
    }


    return 0;
}

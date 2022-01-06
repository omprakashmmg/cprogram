//wap to find transpose of a given matrix
#include <stdio.h>
void main()
{
    int A[3][3]; 
    int B[3][3];
    int row, col;
    printf("Enter elements in matrix of size : \n");
    for(row=0; row<=2; row++)
    {
        for(col=0; col<=2; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }
    /*
      Find transpose of matrix A
     */
    for(row=0; row<=2; row++)
    {
        for(col=0; col<=2; col++)
        {
            /* Store each row of matrix A to each column of matrix B */
            B[col][row] = A[row][col];
        }
    }
    /* Print the transpose of matrix A */
    printf("Transpose of matrix A: \n");
    for(row=0; row<=2; row++)
    {
        for(col=0; col<=2; col++)
        {
            printf("%d ", B[row][col]);
        }

        printf("\n");
    }    
}

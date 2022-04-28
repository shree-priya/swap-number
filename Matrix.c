#include <stdio.h>

int main() { 
    int mat[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The matrix is:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
    
}

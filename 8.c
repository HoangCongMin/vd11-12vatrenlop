//
//  8.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "8.h"
#include <stdio.h>
int main(){
int A[10][10], B[10][10], C[10][10];
int row,col;
int i,j;
printf("nhap so nhieu cua ma tran");
scanf("%d%d", row,col);
printf("nhap xac dinh gia tri cua ma tran a va b\n");
    for(i=0;i<0;i++)
        for(j=0;j<col;j++)
        {
printf("a[%d,%d], b[%d,%d]", i,j,i,j);
scanf("%d %d", &A[i][j]);
C[i][j]=A[i][j]+B[i][j];
        }
    for(i=0;i<row;i++)
        for(j=0;j<col;j++)
        {
printf("A[%d,%d]=%d,B[%d,%d]=%d,C[%d,%d]=%d\n", i,j,A[i][j],i,j,B[i][j],i,j,C[i][j]);
        }
    return 0;
    
    
}

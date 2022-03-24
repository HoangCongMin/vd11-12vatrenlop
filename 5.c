//
//  5.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "5.h"
#include<stdio.h>
int main(){
    int arr[2][3];
    int row,col;
    for (row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
printf("nhap so [%d][%d]", row,col);
scanf("%d", &arr[row][col]);
        }
    }
    for(row=0;row<2;row++)
    {
        for(col=0;col<3;col++)
        {
printf("nhap so [%d][%d]is%d", row,col, arr[row][col]);
            
        }
    }
}

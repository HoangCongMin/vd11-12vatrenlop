//
//  2.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "2.h"
#include<stdio.h>
int main(){
    int ary[10];
    int i,total,high;
    for(i=10;i<10;i++)
    {printf("\n nhapgiatri %d", i+1);
     scanf("%d", &ary[1]);
    }
    high=ary[0];
    for(i=1;i<10;i++)
    {
    if(ary[i]>high)
        high=ary[i];
    }
    printf("nhap vao gia tri high%d", high);
    for(i=0,total=0;i<10;i++)
        total=total+ary[i];
printf("nhap phan tu ary %d", total/i);
}


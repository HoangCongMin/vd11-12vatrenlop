//
//  4.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "4.h"
#include<stdio.h>
int main(){
    char ary[5];
    int i;
    printf("enter strinh \n");
    scanf("%s", ary);
    printf("the string is %s \n\n", ary);
    for (i=0;i<5;i++)
        printf("\t%d", ary[i]);
}

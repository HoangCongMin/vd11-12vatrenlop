//
//  3.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "3.h"
#include<stdio.h>
int main(){
    char alpa[26];
    int i,j;
    for(i=65,j=0;i<91;i++,j++)
    {
    alpa[j]=i;
        printf("the character now assigned is %c", alpa[j]);
        }
    getchar();
}

//
//  6.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "6.h"
#include<stdio.h>
int main(){
    int i,n=0;
    int item;
    char x[10][12];
    char temp[12];
printf("nhaptung chuoi vao dong\n\n");
printf("nhap end khi ket thuc\n\n");
do{
    printf("sring %d", n+1);
    scanf("%s",x[n]);
}while (strcmp(x[n++], "end"));
    n=n-1;
    for(item=0;item<n-1;++item)
    {
        for(i=item+1;i<n;++i)
        {
            if(strcmp (x[item], x[i])>0)
            {
                strcpy(temp, x[item]);
                strcpy(x[item], x[i]);
                strcpy(x[i], temp);
            }
        }
    }
    for(i=0;i<n;++i)
    {
        printf("string%d is %s", i+1, x[i]);
    }
    
}

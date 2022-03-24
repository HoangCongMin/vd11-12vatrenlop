//
//  7.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include <stdio.h>
int main(){
int n;
int num[100];
int l;
int desnum[100],k;
int i,j,temp;
printf("nhap tong so dau can nhap");
scanf("%d", &n);
    for(l=0;l<n;l++)
    {
printf("nhap so diem cua hoc sinh%d", 1+1);
scanf("%d", &num[1]);
    }
    for(k=0;k<n;k++)
    desnum[k]=num[k];
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(desnum[i]<desnum[j])
            {
                temp=desnum[i];
                desnum[i]=desnum[j];
                desnum[j]=temp;
                
            }
        }
    }
    for(i=0;i<n;i++)
printf("nhapso[%d]is %d", i,desnum[i]);
    return 0;
    

}

//
//  main.c
//  3
//
//  Created by hoang minh on 23/03/2022.
//

#include<stdio.h>
int main(){
int mkcuatoi,mkdung,solannhap=0;
    int sd=500000,lc,tr,sdht;
    char c;
  mkdung=123;
do{
   printf("nhap mk ");
   scanf("%d", &mkcuatoi);
   solannhap++;
 }
while(mkcuatoi!=mkdung&&solannhap<3);
    if(mkcuatoi==mkdung){
  printf("ban dang nhap thanh cong\n");
  printf("so du hien tai\n");
  printf("rut tien\n");
  printf("nhap lua chon\n");
  fflush(stdin);
  scanf("%d", &lc);
    switch(lc){
    case 1:
    printf("xem so tien hien co\n");
    printf("xem so du hien tai%d",sd);
    break;
    case 2:
    printf("nhap so tien muon rut\n");
    scanf("%d", &tr);
    if(tr<sd){
        sdht=sd-tr;
    printf("ban rut thanh cong\n");
    printf("so du con lai",sdht);
    }
    case 3:
    printf("nap tien vao tk\n");
    scanf("%d", &tr);
    sdht=sd+tr;
    printf("nop tien thanh cong", sdht);
    break;
    }
    printf("ban co muon tiep tucy/n");
    scanf ("%c", &c);
        while (c=='y'||c=='Y');
        
            
        }
        
else {
    printf("khoa the");
}
    }

  

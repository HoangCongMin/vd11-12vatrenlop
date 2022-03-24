//
//  bttl.c
//  3
//
//  Created by hoang minh on 24/03/2022.
//

#include "bttl.h"
#include <stdio.h>

int main(void) {
  int soluong,menu,tongtien,gia;
  tongtien=0;
  char luachon;
  do{
  printf("nhap vao menu\n");
  scanf("%d", &menu);
  switch(menu){
    case 1:
    printf("goi cafe");
    gia=50;
    printf("chon soluong");
    scanf("%d", &soluong);
    tongtien+=soluong*gia;
    printf("mon nay co gia%", tongtien);
    break;
    case 2:
    printf("goi nuoc cam");
    gia=50;
    printf("chon soluong");
    scanf("%d", &soluong);
    tongtien+=soluong*gia;
    printf("nuoc cam co gia %d", tongtien);
    break;
    case 3:
    printf("goi nuoc loc");
    gia=50;
    printf("chon soluong");
    scanf("%d", &soluong);
    tongtien+=soluong*gia;
    printf("mon nay co gia%d", tongtien);
    break;
    }
  printf("chony/n");
    fflush(stdin);
  luachon=getchar();
    }
    while(luachon=='y'||luachon=='Y');
  
  return 0;
}

#include<stdio.h>
  struct algolab
 {
     char isim[50];
     char bolum[50];
     long telno;
 }uye[11];  
 
 int main()
 {
     for(int i=0;i<11;i++){
     printf("uyenin ismini giriniz:\n");
     scanf("%s",&uye[i].isim);
     printf("uyenin bolumunu giriniz:\n");
     scanf("%s",&uye[i].bolum);
     printf("uyenin telefon numarasını giriniz:\n");
     scanf("%ld",&uye[i].telno);
     }
     for(int i=0;i<11;i++){
     printf("\t%s\nuyenin bolumu:%s\nuyenin telefon numarasi:%ld",uye[i].isim,uye[i].bolum,uye[i].telno);
     printf("\n");
     }
     return 0;
 }

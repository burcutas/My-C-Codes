#include <stdio.h>

int fact(int);
int per(int,int);
int main()
{
    int n,r;
    printf("iki sayi giriniz:");
    scanf("%d %d" , &n,&r);
    printf("permütasyonu: %d" , per(n,r));
  //P(n,r)=n!/(n-r)!
}
int per(int n, int r) {
    return fact(n)/fact(n-r);
}
int fact(int n) {
    int sonuc=1;
    for(int i=1;i<=n;i++) {
        sonuc *=i;
    }
    return sonuc;
}

#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    int sonuc1,sonuc2;
    
    printf("degeri giriniz:");
    scanf("%lf",&a);
    
    sonuc2=a;
    if(a>sonuc2)
    {
    sonuc1=a+1;
    }
    else if(a==sonuc2){
        sonuc1=a;
    }
    
    printf("ust yuvarlama= %d",sonuc1);
    printf("\nalt yuvarlama= %d",sonuc2);
     
    
    return 0;

}


#include <stdio.h>
int veya(int p, int q){
    int sonuc;
    if(p==0 && q==0){
        sonuc=0;
    }
    else{
        sonuc=1;
    }
    return sonuc;
}

int ve(int p, int q){
    int sonuc;
    if(p==0 || q==0){
        sonuc=0;
    }
    else{
        sonuc=1;
    }
    return sonuc;
}

int ise(int p, int q){
    int sonuc;
    if(p==1 && q==0){
        sonuc=0;
    }
    else{
        sonuc=1;
        }
        return sonuc;
}

int ancakveancak(int p, int q){
    int sonuc;
    if(p==q){
        sonuc=1;
    }
    else{
        sonuc=0;
    }
    return sonuc;
}

int yada(int p, int q){
    int sonuc;
    if(p!=q){
        sonuc=1;
    }
    else{
        sonuc=0;
    }
    return sonuc;
}

int main()
{
    int p,q,islem,sonuc;
    printf("p ve q degerlerini giriniz:");
    scanf("%d %d",&p,&q);
    
    printf("bir islem giriniz(veya icin 0,ve icin 1,ise icin 2,ancak ve ancak icin 3,ya da icin 4):");
    scanf("%d",&islem);
    
    
    if(islem==0){
        printf("%d v %d = %d",p,q,veya(p,q));
    }
    else if(islem==1){
        printf("%d ^ %d = %d",p,q,ve(p,q));
    }
    else if(islem==2){
        printf("%d => %d = %d",p,q,ise(p,q));
    }
    else if(islem==3){
        printf("%d <=> %d = %d",p,q,ancakveancak(p,q));
    }
    else if(islem==4){
        printf("%d ⊻ %d = %d",p,q,yada(p,q));
    }


    return 0;
}


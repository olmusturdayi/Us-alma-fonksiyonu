#include <stdio.h>
#include <stdlib.h>
int usAlma(int,int);

int main()
{
    int taban,us,sonuc;
    printf("Taban sayisini girin: ");
    scanf("%d",&taban);
    printf("Ussu girin: ");
    scanf("%d",&us);
    sonuc = usAlma(taban,us);
    printf("Sonuc:%d",sonuc);
    return 0;
}
int usAlma(int taban,int us) {
    int sonuc = 1;
    for(int i=0;i<us;i++) {
        sonuc = sonuc * taban;
    }
    return sonuc;
}

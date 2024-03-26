#include<stdio.h>

int main(){
    // Khai bao bien
    int a;
    int *p;

    // In d?a ch? ô nh? c?a bi?n a
    printf("Dia chi o nho bien a: %p\n", (void*)&a);

    // Nh?p giá tr? vào ô nh? trong b? nh? c?a bi?n a
    printf("Hay nhap gia tri cua bien a: ");
    scanf("%d", &a);

    // In giá tr? c?a bi?n a
    printf("Gia tri cua bien a: %d\n", a);

    // Gán d?a ch? c?a bi?n a cho con tr? p
    p = &a;

    // In giá tr? c?a bi?n con tr? p, là d?a ch? c?a bi?n a
    printf("Gia tri cua bien con tro: %p\n", (void*)p);

    // In d?a ch? c?a bi?n con tr? p
    printf("Dia chi cua bien con tro: %p", (void*)&p);
}


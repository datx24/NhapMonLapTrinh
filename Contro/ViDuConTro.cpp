#include<stdio.h>

int main(){
    // Khai bao bien
    int a;
    int *p;

    // In d?a ch? � nh? c?a bi?n a
    printf("Dia chi o nho bien a: %p\n", (void*)&a);

    // Nh?p gi� tr? v�o � nh? trong b? nh? c?a bi?n a
    printf("Hay nhap gia tri cua bien a: ");
    scanf("%d", &a);

    // In gi� tr? c?a bi?n a
    printf("Gia tri cua bien a: %d\n", a);

    // G�n d?a ch? c?a bi?n a cho con tr? p
    p = &a;

    // In gi� tr? c?a bi?n con tr? p, l� d?a ch? c?a bi?n a
    printf("Gia tri cua bien con tro: %p\n", (void*)p);

    // In d?a ch? c?a bi?n con tr? p
    printf("Dia chi cua bien con tro: %p", (void*)&p);
}


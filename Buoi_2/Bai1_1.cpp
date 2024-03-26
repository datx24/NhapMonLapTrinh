#include<stdio.h>

void HoanDoi(int* a,int* b)
{
		int temp=*a;
			*a=*b;
			*b=temp;
}

void SapXepGiamDan(int* a,int* b,int* c,int* d,int* e){
	if(*a<*b) HoanDoi(a,b);
	if(*a<*c) HoanDoi(a,c);
	if(*a<*d) HoanDoi(a,d);
	if(*a<*e) HoanDoi(a,e);
	if(*b<*c) HoanDoi(b,c);
	if(*b<*d) HoanDoi(b,d);
	if(*b<*e) HoanDoi(b,e);
	if(*c<*d) HoanDoi(c,d);
	if(*c<*e) HoanDoi(c,e);
	if(*d<*e) HoanDoi(d,e);
}

int main(){
	int a,b,c,d,e;
	printf("Nhap 5 so:\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	SapXepGiamDan(&a,&b,&c,&d,&e);
	printf("\nSap xep giam dan:%d %d %d %d %d",a,b,c,d,e);
}

	

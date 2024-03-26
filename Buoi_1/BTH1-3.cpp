#include<stdio.h>

void HoanDoi(int* a,int* b)
{
	if(*a > *b)
	{
		int temp=*a;
			*a=*b;
			*b=temp;
	}
}

void SapXepTangDan(int* a,int* b,int* c,int* d){
	if(*a>*b) HoanDoi(a,b);
	if(*a>*c) HoanDoi(a,c);
	if(*a>*d) HoanDoi(a,d);
	if(*b>*c) HoanDoi(b,c);
	if(*b>*d) HoanDoi(b,d);
	if(*c>*d) HoanDoi(c,d);
}

int main(){
	int a,b,c,d;
	printf("Nhap 4 so a,b,c,d:\n");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	SapXepTangDan(&a,&b,&c,&d);
	printf("\nSap xep tang dan:%d %d %d %d",a,b,c,d);
	printf("\nGia tri lon nhat:%d",d);
	printf("\nGia tri nho thu 2:%d",b);
	
	
}

	

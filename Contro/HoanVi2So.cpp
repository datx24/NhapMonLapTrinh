#include<stdio.h>

//ham hoan doi hai gia tri
void HoanDoi(int *x,int *y){
	int temp=*x;
		*x=*y;
		*y=temp;
}

int main(){
	int a,b;
	printf("Nhap gia tri a:");
	scanf("%d",&a);
	printf("Nhap gia tri b:");
	scanf("%d",&b);
	HoanDoi(&a,&b);//&a &b
	printf("Gia tri a sau khi hoan doi:%d\n",a);
	printf("Gia tri b sau khi hoan doi:%d",b);
}

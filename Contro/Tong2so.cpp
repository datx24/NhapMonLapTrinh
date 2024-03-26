#include<stdio.h>
void TongVaHieu(int *ptr1,int *ptr2,int &tong,int &hieu){
	tong=*ptr1 + *ptr2;
	hieu=*ptr1 - *ptr2;
}

int main(){
	int a=10,b=50;
	int tong,hieu;
	printf("Nhap 2 so a b:");
	scanf("%d%d",&a,&b);
	int *ptr1,*ptr2;
	ptr1=&a;
	ptr2=&b;
	TongVaHieu(ptr1,ptr2,tong,hieu);
	printf("Tong 2 so a va b:%d\n",tong);
	printf("Hieu 2 so a va b:%d",hieu);
}

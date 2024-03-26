#include<stdio.h>
#define MAX 100

//prototype
void NhapMang(int &n,int a[]);
void XuatMang(int n,int a[]);
char TimKiemPhanTu(int n, int a[],int x);
float TBCPhanTu(int n,int a[]);

//1 2 3 

int main(){
	int n,x,a[MAX];
	NhapMang(n,a);
	XuatMang(n,a);
	printf("Nhap phan tu can tim kiem:");
	scanf("%d",&x);
	char kq=TimKiemPhanTu(n,a,x);
	if(kq==1)
		printf("Gia tri %d co xuat hien trong mang",x);
	else 
		printf("Khong tim thay gia tri %d trong mang\n",x);	
	printf("\nTinh trung binh cong :% 1.f",TBCPhanTu(n,a));
}


void NhapMang(int &n,int a[]){
	do{
		printf("Nhap so phan tu cua mang:");
		scanf("%d",&n);
	}while(n<=0);
	for(int i=0;i<n;i++){
		printf(" a[%d]=",i) ;
		scanf("%d",&a[i]);
	}
}

void XuatMang(int n,int a[]){
	for(int i=0;i<n;i++)
		printf("a[%d]=%d\n",i,a[i]);
	}

char TimKiemPhanTu(int n, int a[],int x){
	for(int i=0;i<n;i++){
	if(a[i]==x)
	return 1;
	}
	return 0;	
	}

float TBCPhanTu(int n,int a[]){
	float sum = 0;
	for(int i=0;i<n;i++){
		sum=sum+a[i];
		sum/n;
	}
	return sum/n;
}

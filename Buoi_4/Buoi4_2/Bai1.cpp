#include<stdio.h>
#define MAX 100
//prototype
void NhapMang(int &n,int a[]);
void InMang(int n,int a[]);
char KTSNguyenTo(int n);
char TimSoNguyenTo(int n,int a[]);

int main(){
	int n,a[MAX];
	NhapMang(n,a);
}

//Viet ham
void NhapMang(int &n,int a[]){
	do{
		printf("Nhap so luong phan tu trong mang:");
		scanf("%d",&n);
	}while(n<3 || n > 50);
	for(int i=0;i<n;i++){
		do{
		printf("Nhap gia tri a[%d]:",i);
		scanf("%d",&a[i]);	
		}while(a[i]==a[i+1]);	
	}
}

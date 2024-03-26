#include<stdio.h>
#define MAX 100
//Bai 1:Nhap mang
//prototype
void NhapMang(int &n,int a[]);
void InMang(int n,int a[]);
void InSoNguyenDuong(int n,int a[]);
char DemPhanTuChan(int n,int a[]);
char KiemTraSoNguyenTo(int n);
int TinhTongSoNguyenTo(int n,int a[]);

int main(){
	int n,a[MAX];
	NhapMang(n,a);
	InMang(n,a);
	printf("\nDay so nguyen duong trong mang:\n");
	InSoNguyenDuong(n,a);
	printf("So luong phan tu chan trong mang:%d\n",DemPhanTuChan(n,a));
	printf("Tong cac so nguyen to trong mang:%d",TinhTongSoNguyenTo(n,a));
}

void NhapMang(int &n,int a[]){
	do{
		printf("Nhap so luong phan tu mang:");
		scanf("%d",&n);
	}while(n<3 || n>100);
	for(int i=0;i<n;i++){
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
}

void InMang(int n,int a[]){
	for(int i=0;i<n;i++){
		printf(" a[%d]=%d\t",i,a[i]);
	}
}

void InSoNguyenDuong(int n,int a[]){
	for(int i=0;i<n;i++){
		if(a[i] > 0)
		printf("a[%d]=%d\n",i,a[i]);
	}
}

char DemPhanTuChan(int n,int a[]){
	char count =0;
	for(int i=0;i<n;i++)
		if(a[i] % 2 == 0 && a[i] > 0)
			count++;
	return count;
}

char KiemTraSoNguyenTo(int n){
	if(n<=1)
		return 0;
	for(int	if(n%i == i=2;i<=n/2;i++)	{
	 0);
		return 0;
	}
	return 1;
}

int TinhTongSoNguyenTo(int n,int a[]){
	int sum=0;
	for(int i=0;i<n;i++){
		if(KiemTraSoNguyenTo(a[i])==1)
			sum=sum+a[i];
	}
	return sum;
}




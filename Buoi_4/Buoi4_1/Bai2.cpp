//bai 2 
#include<stdio.h>
#define MAX 100

//prototype
void NhapMangSoNguyenDuong(int &n,int a[]);
void InMang(int n,int a[]);
int InPTLeCuoiCung(int n,int a[]);
float TBCPTLe(int n,int a[]);
int PTuNhoNhat(int n,int a[]);
char SLPTuNhoNhat(int n,int a[]);

//Ham main
int main(){
	int n,a[MAX];
	float tb;
	NhapMangSoNguyenDuong(n,a);
	InMang(n,a);
	printf("Phan tu le cuoi cung trong mang:%d\n",InPTLeCuoiCung(n,a));
	tb=TBCPTLe(n,a);
	printf("Trung binh cong phan tu co gia tri le trong day:%.2f\n",tb);
	printf("Phan tu nho nhat trong mang:%d\n",PTuNhoNhat(n,a));
	printf("So luong phan tu nho nhat trong mang:%d",SLPTuNhoNhat(n,a));
}

//Viet ham
void NhapMangSoNguyenDuong(int &n,int a[]){
	do{
		printf("Nhap so luong phan tu:");
		scanf("%d",&n);
	}while(n<5 || n>100 );
	for(int i=0;i<n;i++){
		do{
		printf("Nhap a[%d]:",i);
		scanf("%d",&a[i]);
		}while(a[i] <= 0);
		
	}
}

void InMang(int n,int a[]){
	for(int i=0;i<n;i++){
		printf("a[%d]=%d\t",i,a[i]);
	}
}

int InPTLeCuoiCung(int n,int a[]){
	int flag=0;
	for(int i=0;i<n;i++){
		if(a[i] % 2 != 0 && a[i] > 0)
		flag=a[i];
	}
	return flag;
}

float TBCPTLe(int n,int a[]){
	int sum=0,count=0;
	for(int i=0;i<n;i++){
		if(a[i] % 2 != 0 && a[i] > 0)
		sum=sum + a[i];
		count++;
	}
	return float(sum)/count;
}

int PTuNhoNhat(int n,int a[]){
	int min=a[0];
	for(int i=0;i<n;i++){
		int min = a[i];
		if(a[i] < min)
			a[i] = min;
	}
	return min;
}

char SLPTuNhoNhat(int n,int a[]){
	int count = 0;
	for(int i=0;i<n;i++){
		if(a[i]==PTuNhoNhat(n,a))
			count ++;
	}
	return count ;
}

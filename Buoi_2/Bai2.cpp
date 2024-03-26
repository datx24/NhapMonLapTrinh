#include<stdio.h>

int KiemTra(int n){
	if(n<2)
		return 0;
	for(int i=2;i*i <= n;i++){
		if(n%i==0)
		return 0;
	}
		return 1;
}

int TinhTongSoNguyenTo(int n)
{
	int sum=0;
	for(int i=2;i<=n;i++){
		if(KiemTra(i)==1)
		sum+=i;
	}
	return sum;
}

int main(){
	int n;
	do{
		printf("Nhap 1 so nguyen duong co gia tri 5<=n<=30:");
		scanf("%d",&n);
	}while(n<5||n>30);
	
	printf("Cac so nguyen to co gia tri <= %d: %d",n);
	for(int i=2;i<=n;i++){
		if(KiemTra(i))
		printf(" %d ",i);
	}
	printf("\nTong cac so nguyen to: %d\n", TinhTongSoNguyenTo(n));
	
}

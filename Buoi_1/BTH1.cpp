#include<stdio.h>

int TongSoNguyen(int so)
{
	int tong=0;
	while(so!=0)
	{
		tong=tong+so%10;
		so=so/10;
	}
	return tong;
}
int KiemTra(int so)
{
	int tong=TongSoNguyen(so);
	if(tong%3==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n;
	do{
		printf("Nhap 1 so nguyen duong n:");
		scanf("%d",&n);
	}while(n<0);
	if(KiemTra(n))
	{
		printf("%d la so chia het cho 3\n",n);
	}
	else
	{
		printf("%d khong phai la so chia het cho 3\n",n);
	}
	printf("Tong so nguyen %d : %d",n,TongSoNguyen(n));
	return 0;
}

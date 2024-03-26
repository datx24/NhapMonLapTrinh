#include<stdio.h>

//prototype
int TimUCLN(int a,int b);
int TimBCNN(int a,int b);
void NhapPhanSo(int &a,int &b);
void InPhanSo(int a,int b);
void TongHaiPhanSo(int tuso1,int tuso2,int mauso1,int mauso2,int &KetQuaTu,int &KetQuaMau);
void HieuHaiPhanSo(int tuso1,int tuso2,int mauso1,int mauso2,int &KetQuaTu,int &KetQuaMau);

//Viet Ham
int TimUCLN(int a,int b){
	while(b!=0){
		int temp=b;
		b=a%b;
		a=temp;
	}
	return a;
}

int TimBCNN(int a,int b){
	int ucln=TimUCLN(a,b);
	return (a*b) / ucln;
}

void NhapPhanSo(int &a,int &b){
	printf("Nhap tu so:");
	scanf("%d",&a);
	do{
		printf("Nhap mau so:");
		scanf("%d",&b);
	}while(b==0);
}

void InPhanSo(int a,int b){
	printf("\t%d/%d\t",a,b);
}

void TongHaiPhanSo(int tuso1,int tuso2,int mauso1,int mauso2,int &KetQuaTu,int &KetQuaMau){
	int ketQuaTu=(tuso1*mauso2)+(tuso2*mauso1);
	int ketQuaMau=(mauso1*mauso2);
	KetQuaTu=ketQuaTu/TimUCLN(ketQuaTu,ketQuaMau);
	KetQuaMau=ketQuaMau/TimUCLN(ketQuaTu,ketQuaMau);
}

void HieuHaiPhanSo(int tuso1,int tuso2,int mauso1,int mauso2,int &KetQuaTu,int &KetQuaMau){
	int ketQuaTu=(tuso1*mauso2)-(tuso2*mauso1);
	int ketQuaMau=(mauso1*mauso2);
	KetQuaTu=ketQuaTu/TimUCLN(ketQuaTu,ketQuaMau);
	KetQuaMau=ketQuaMau/TimUCLN(ketQuaTu,ketQuaMau);
}

int main(){
	int tuso1,mauso1,tuso2,mauso2;
	int KetQuaTu,KetQuaMau;
	printf("Nhap phan so thu 1:\n");
	NhapPhanSo(tuso1,mauso1);
	printf("Nhap phan so thu 2:\n");
	NhapPhanSo(tuso2,mauso2);
	//Goi ham tinh tong hai phan so
	TongHaiPhanSo(tuso1,tuso2,mauso1,mauso2,KetQuaTu,KetQuaMau);
	printf("Tong cua hai phan so:%d/%d\n",KetQuaTu, KetQuaMau);
	HieuHaiPhanSo(tuso1,tuso2,mauso1,mauso2,KetQuaTu,KetQuaMau);
	printf("Hieu cua hai phan so:%d/%d\n",KetQuaTu, KetQuaMau);
	return 0;
}


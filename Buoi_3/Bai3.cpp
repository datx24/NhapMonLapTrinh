#include<stdio.h>
//prototype
int DocNguoc(int n); //VD: n=1206 --> n=6021
char KTDoiXung(int n); //VD: n=12021 --> n=12021 => doi xung

//Ham main
int main(){
	//Khai bao bien
	int n;
	char kqkt;
	//Nhap so nguyen duong n
	do{
		printf("Nhap so nguyen duong n:");
		scanf("%d",&n);
	}while(n<0);
	//Goi ham xu ly va in ket qua theo yeu cau
	kqkt=KTDoiXung(n);
	if(kqkt==1){
		printf("So nguyen %d la so doi xung!",n);
	}
	else{
		printf("So nguyen %d khong phai la so doi xung.",n);
	}
	return 1;
}

//Viet ham
int DocNguoc(int n){
	char ks;//n=12345
	int nn=0;
	do{
		ks=n%10;
		int nn=nn*10+ks;
		n=n/10;
	}while(n!=0);
	return nn;
}

char KTDoiXung(int n){
	int nn=DocNguoc(n);
	if(n==nn)
		return 1;
	return 0;	
}

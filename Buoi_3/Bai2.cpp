#include<stdio.h>
//prototype
char InKiSoLe(int n);
char TimKiSoLonNhat(int n);

int main(){
	//Khai bao bien
	int n;
	char ksl,ksmax;
	//Nhap so nguyen n
	do{
		printf("Nhap so nguyen duong n:");
		scanf("%d",&n);
	}while(n<=0);
	//Nhap ca ham xu ly va hien thi ket qua theo yeu cau
	ksl=InKiSoLe(n);
	if(ksl==0){
		printf("So nguyen %d khong co ki so le:",n);
	}
	ksmax=TimKiSoLonNhat(n);
	printf("\nSo nguyen %d co ki so lon nhat la: %d",n,ksmax);
		return 1;
}
//Xay dung phan xu ly
char InKiSoLe(int n){
	char coksle=0;
	char ks;
	do{
		ks=n%10;
		if(ks%2==1 && ks>0){
			printf("%d ",ks);
			coksle=1;
		}
		n=n/10;
	}while(n!=0);
	return coksle;
}

char TimKiSoLonNhat(int n){//n=10967
	char ksmax=n%10; //ksmax=9
	do{
		if(n%10>ksmax) 
		{
			ksmax=n%10;	//ksmax=9
		}
		n=n/10;//n=109
	}while(n!=0);
	return ksmax;
}


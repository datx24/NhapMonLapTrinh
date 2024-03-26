#include<stdio.h>

//Khai bao nguyen mau cac ham (prototype)
int DemKiSoChan(int n);
int DemKS(int n);
int VTKSChanCC(int n); //xac dinh vi tri ki so chan cuoi cung trong n theo huong tim tu phai sang trai
int VTKSChanDT(int n); //xac dinh vi tri ki so chan dau tien trong n theo huong tu trai sang phai

int main(){
	//Khai bao bien
	int n;
	int vtdt;
	//Nhap so nguyen n
	do{
		printf("Nhap vao 1 so nguyen duong: ");
		scanf("%d",&n);
	}while(n<=0);
	//Nhap cac ham xu ly va hien thi ket qua theo yeu cau
	int slksc=DemKiSoChan(n);
	if(slksc > 0){
		printf("So nguyen %d co %d ki so chan.",n,slksc);
		vtdt=VTKSChanDT(n);
		printf("\nSo nguyen %d co ki so chan xuat hien dau tien tai vi tri %d",n,vtdt);
	}
	else{
		printf("So nguyen %d khong co ki so chan nao!",n);
	}
	return 0;
}

//Xay dung phan xu ly(than) cac ham
int DemKiSoChan(int n){
	int dem=0;
	do
	{
	int ks=n%10;
	if(ks%2==0 && ks>0)
	dem++;
	n=n/10;
	}while(n!=0);
	return dem;
}

int DemKS(int n)
{
	int dem=0;
	do
	{
	int ks=n%10;
	dem++;
	n=n/10;
	}while(n!=0);
	return dem;
}

int VTKSChanCC(int n){
	int vt;
	int vtks=0;
	do{
		int ks=n%10;
		vtks++;
		n=n/10;
		if(ks%2==0 && ks>0){
			vt=vtks;
		}	
	}while(n!=0);
	return vt;
}

int VTKSChanDT(int n){
	//n=1027978 --> vtkscdt=7-5+1=3
	int vtkscdt=DemKS(n)-VTKSChanCC(n)+1;
	return vtkscdt;
}


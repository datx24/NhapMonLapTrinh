//Tim so lon nhat va nho nhat trong day so.vd:21079 -> 9 la so lon nhat,0 la so nho nhat
#include<stdio.h>

void TimKySoLonNhatVaBeNhat(int n,int *max,int *min);

void TimKySoLonNhatVaBeNhat(int n,int *max,int *min){
	*max=-1;//so lon nhat luon > -1 trong day so.
	*min=10;//so be nhat luon <10 trong day so.
	
	while(n>0){
		int so = n%10;
		if(so > *max) {
			*max=so;
		}
		if(so < *min) {
			*min=so;
		}
		n = n / 10;
		}
	}
	
	
int main(){
	int num,max,min;
	printf("Nhap so nguyen duong n:");
	scanf("%d",&num);
	TimKySoLonNhatVaBeNhat(num,&max,&min);
	printf("Ky so lon nhat:%d\n",max);
	printf("Ky so be nhat:%d",min);
}

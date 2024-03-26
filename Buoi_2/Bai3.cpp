/*#include<stdio.h> Cach 1

void TimMaxMin(int a,int b,int c,int d,int *max,int *min){
	a=*max=*min;
	if(b>*max) {
		*max=b;
	}
	else if(b<*min){
		*min=b;
	}
	
	if(c>*max) {
		*max=c;
	}
	else if(c<*min){
		*min=c;
	}
	
	if(d>*max) {
		*max=d;
	}
	else if(d<*min){
		*min=d;
	}
}

int main(){
	int num1,num2,num3,num4;
	int max,min;
	printf("Nhap 4 so nguyen:");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	max=min=num1;
	TimMaxMin(num1,num2,num3,num4,&max,&min);
	printf("So lon nhat:%d\n",max);
	printf("So nho nhat:%d",min);
}
*/
#include<stdio.h>
/*CACH 2*/
//prototype<KDL TenHam>(ds doi so kem Kieu Du Lieu)
void TimMaxMin(int a,int b,int c,int d,int *max,int *min);

void TimMaxMin(int a,int b,int c,int d,int *max,int *min)
{
	*max=(b>a)?b:a;
	*min=(b<a)?b:a;
	
	*max=(c>*max)?c:*max;
	*min=(c<*min)?c:*min;
	
	*max=(d>*max)?d:*max;
	*min=(d<*min)?d:*min;
}

int main(){
	int num1,num2,num3,num4;
	int max,min;
	printf("Nhap 4 so nguyen:");
	scanf("%d%d%d%d",&num1,&num2,&num3,&num4);
	TimMaxMin(num1,num2,num3,num4,&max,&min);
	printf("So lon nhat:%d\n",max);
	printf("So nho nhat:%d",min);
}

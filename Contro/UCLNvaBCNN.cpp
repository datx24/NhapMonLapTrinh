#include<stdio.h>

void TimUCLNVaBCNN(int a,int b,int &UCLN,int &BCNN){
	int tempA=a,tempB=b;
	while(tempA!=tempB){
		if(tempA>tempB)
			tempA=tempA-tempB;
		else tempB=tempB-tempA;	
	}
	UCLN =tempA;
	BCNN = (a*b)/UCLN;
}

int main(){
	int num1,num2;
	int UCLN,BCNN;
	printf("Nhap 2 so nguyen bat ki:");
	scanf("%d%d",&num1,&num2);
	TimUCLNVaBCNN(num1,num2,UCLN,BCNN);
	printf("Uoc chung lon nhat cua %d va %d:%d\n",num1,num2,UCLN);
	printf("Boi chung nho nhat cua %d va %d:%d",num1,num2,BCNN);
}

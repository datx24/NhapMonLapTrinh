#include<stdio.h>
int KiemTra(char c)
{
	if((c>='a' && c<='z')||(c>='A' && c<='Z'))
	{
		return 1;
		}
	else return 0;	
	}
	
char PhanLoaiKiTu(char c){
	if(KiemTra(c) == 1){
		if(c>='a' && c<='z'){
			return 't';
		}
		else if(c>='A' && c<='Z'){
			return 'h';
		}
	}
	else return 'l';
}

int main(){
	char kt;
	printf("Nhap 1 ki tu:");
	scanf("%c",&kt);
	printf("%c",PhanLoaiKiTu(kt));
}	

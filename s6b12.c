#include<stdio.h>
int main(){
	int Fnum = 1,Snum = 1,sum,n;
	printf("Nhap so fibonaci\n");
	scanf("%d",&n);
	for(int i =0;i<n-2;i++){
		sum=Fnum + Snum;
		Fnum = Snum;
		Snum = sum;
		
	}
	printf("%d ",sum);
	
}

#include<stdio.h>
int main(){
	int n=100;
	for(int i=1;i<101;i++){
	
		if(i%5==0&&i%3==0){
			printf("fizzbuzz \n");
		}else if(i%5==0){
			printf("buzz\n");
		}else if(i%3==0){
			printf("fizz\n");
		}else{
			printf("%d \n",i);
		}
		}
	
	return 0;
}

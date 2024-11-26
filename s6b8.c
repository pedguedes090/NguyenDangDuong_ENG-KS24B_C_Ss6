#include <stdio.h>

int main(){
	float money,interest_rate,month,interest;
		printf("tien gui ban dau: ");
		scanf("%f",&money);
		printf("lai suat: ");
		scanf("%f",&interest_rate);
		printf("so thang gui: ");
		scanf("%f",&month);
	 interest = money * interest_rate / 100 * month  ;
       	printf("tien lai %.2f\n",interest);
       	printf("tien lai nhan duoc %.2f\n",money + interest);
return 0;	
}

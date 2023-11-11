#include <stdio.h>
int main()
{
	int tien;
	float hoaHong;
	printf("Tong so tien kiem duoc trong thang nay la:");
	scanf("%d",&tien);
	if(tien<=100000000){
		hoaHong=tien/100*5;
		printf("So tien hoa hong:%.1f",hoaHong);
	}else if(tien<=300000000){
		hoaHong=tien/100*10;
		printf("So tien hoa hong:%.1f",hoaHong);
	}else if(tien>30000000){
		hoaHong=tien/100*20;
		printf("So tien hoa hong:%.1f",hoaHong);
	}
}
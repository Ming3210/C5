#include<stdio.h>
int main(){
	int luong,thue,nhanDuoc;
	printf("Luong nhan duoc:");
	scanf("%d",&luong);
	if(luong<0){
		printf("=))");
	}else if(luong<=5000000){
		nhanDuoc=luong-luong*5/100;
		printf("Luong:%d",nhanDuoc);
	}else if(luong<=10000000){
		nhanDuoc=luong-luong*10/100;
		printf("Luong:%d",nhanDuoc);
	}else if(luong<=18000000){
		nhanDuoc=luong-luong*15/100;
		printf("Luong:%d",nhanDuoc);
	}else if(luong<=32000000){
		nhanDuoc=luong-luong*20/100;
		printf("Luong:%d",nhanDuoc);
	}else if(luong<=52000000){
		nhanDuoc=luong-luong*25/100;
		printf("Luong:%d",nhanDuoc);
	}else if(luong<800000000){
		nhanDuoc=luong-luong*30/100;
		printf("Luong:%d",nhanDuoc);
	}else{
		nhanDuoc=luong-luong*35/100;
		printf("Luong:%d",nhanDuoc);
	}
}
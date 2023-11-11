#include<stdio.h>
int main()
{
	int ngay,thang;
	printf("Nhap ngay va thang:");
	scanf("%d %d",&ngay,&thang);
	switch(thang){
		case 3:
		if(21<=ngay<32){
			printf("Cung Bach Duong");
		}else if(0<ngay<21){
			printf("Cung Song Ngu");
		}else{
			printf("Ko hop le");
		}
		break;
		case 4:
		if(21<=ngay<31){
			printf("Cung Kim Nguu");
		}else if(0<ngay<21){
			printf("Cung Bach Duong");
		}else{
			printf("Ko hop le");
		}
		break;
		case 5:
		if(21<=ngay<32){
			printf("Cung Song Tu");
		}else if(0<ngay<21){
			printf("Cung Kim Ngu");
		}else{
			printf("Ko hop le");
		}
		break;
		case 6:
			if(22<=ngay<31){
				printf("Cung cu giai");
			}else if(0<ngay<21){
				printf("Cung Song Tu");
			}else{
			printf("Ko hop le");
		}
		break;
		case 7:
		if(23<=ngay<32){
			printf("Cung Su Tu");
		}else if(0<ngay<21){
				printf("Cung Cu Giai");
			}else{
			printf("Ko hop le");
		}
		break;
		case 8 :
		if(23<=ngay<32){
			printf("Cung Xu Nu");
		}else if(0<ngay<21){
				printf("Cung Su Tu");
			}else{
			printf("Ko hop le");
		}
		break;
		case 9 :
		if(23<=ngay<31){
			printf("Cung Tien Binh");
		}else if(0<ngay<21){
				printf("Cung Xu Nu");
			}else{
			printf("Ko hop le");
		}
		break;
		case 10:
		if(24<=ngay<32){
			printf("Cung Bo Cap");
		}else if(0<ngay<21){
				printf("Cung Tien Binh");
			}else{
			printf("Ko hop le");
		}
		break;
		case 11:
		if(23<=ngay<31){
			printf("Cung Nhan Ma");
		}else if(0<ngay<21){
				printf("Cung Bo Cap");
			}else{
			printf("Ko hop le");
		}
		break;
		case 12:
		if(22<=ngay<32){
			printf("Cung Ma Ket");
		}else if(0<ngay<21){
				printf("Cung Nhan Ma");
			}else{
			printf("Ko hop le");
		}
		break;
		case 1:
		if(20<=ngay<32){
			printf("Cung Bao Binh");
		}else if(0<ngay<21){
				printf("Cung Ma Ket");
			}else{
			printf("Ko hop le");
		}
		break;
		case 2:
		if(19<=ngay<30){
			printf("Cung Song Ngu");
		}else if(0<ngay<21){
				printf("Cung Bao Binh");
			}else{
			printf("Ko hop le");
		}
		break;
		default:
			printf("Ko hop le");
		}
		}
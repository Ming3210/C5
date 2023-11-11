#include <stdio.h>
#include <math.h>
int main()
{
	int a,b,c;
	float x,x1,x2,Delta;
	printf("Nhap cac so a,b,c trong bieu thuc ax^2 + bx + c: ");
	scanf("%d %d %d",&a,&b,&c);
	switch(a){
		case 0:
			if(b!=0 && c!=0){
				x=-c/b;
				printf("gia tri cua x la:%.2f",x);
			}else if(b==0 && c==0){
				printf("phuong trinh vo so nghiem");
			}else if(b==0 && c!=0){
				printf("phuong trinh vo nghiem");
			}else if(b!=0 && c==0){
				printf("x = 0");
			}
			break;
		default:
			Delta=b*b-4*a*c;
			if(Delta<0){
				printf("phuong trinh vo nghiem");
			}
			if(b==0 && c==0){
				printf("x = 0");
			}else if(b==0 && c!=0 && Delta>=0){
				x=sqrt(-c/a);
				printf("gia tri cua x la:%.2f",x);
			}else if(b!=0 && c==0 && Delta>0||b!=0 && c!=0 && Delta>0){
				x1=(-b+sqrt(Delta))/2*a;
				x2=(-b-sqrt(Delta))/2*a;
				printf("2 nghiem tinh duoc la:%f va %f",x1,x2);
			}else if(b!=0 && c==0 && Delta==0||b!=0 && c!=0 && Delta==0){
				x= -b/2*a;
				printf("Nghiem:%f",x);
	}
}
}
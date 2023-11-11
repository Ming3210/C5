#include<stdio.h>
int main()
{
	int phut,thueBao,tien;
	thueBao=25000;
	printf("So phut su dung dien thoai:");
	scanf("%d",&phut);
	if(phut<50){
		tien=thueBao+600*phut;
		printf("Thue bao hang thang:%d",tien);
	}else if(50<phut<200){
		tien=thueBao+400*phut;
		printf("Thue bao hang thang:%d",tien);
	}else if(200<phut<400){
		tien=thueBao+200*phut;
		printf("Thue bao hang thang:%d",tien);
	}else{
		tien=thueBao+100*phut;
		printf("Thue bao hang thang:%d",tien);
	}
}
// write a structure for a data accept a data and display it.

#include<stdio.h>

struct date{
	int day;
	int month;
	int year;
}a1;

int main(){
	printf("Enter the date in dd/mm/yyyy format: ");
	scanf("%d/%d/%d",&a1.day,&a1.month,&a1.year);
	printf("%d/%d/%d",a1.day,a1.month,a1.year);
	return 0;
}
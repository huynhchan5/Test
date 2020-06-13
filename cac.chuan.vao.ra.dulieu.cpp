	//CÁC CHUAN VAO RA DU LIEU
#include<stdio.h>
		
int main()
{
	char c; // %c
	scanf("%c",&c);
	printf("gia tri cua bien char = %c", c);
	
	short s;// %hi
	scanf("%hi",&s);
	printf("gia tri cua bien short = %hi",s);
	
	unsigned short us;// %hu
	scanf("%hu",&us);
	printf("gia tri cua bien unsigned short = %hu",us);
	
	int i;// %d,%i
	scanf("%d",&i);
	printf("gia tri cua bien int = %d",i);
	
	unsigned int ui;// %u
	scanf("%u",&ui);
	printf("gia tri cua bien unsigned int = %u",ui);
	
	long l;// %ld ,%li
	scanf("%ld",&l);
	printf("gia tri cua bien long = %ld",l);
	
	long long ll;// %lld ,%lli
	scanf("%lld",&ll);
	printf("gia tri cua bien long long = %lld",l);
	
	float f;// %f
	scanf("%f",&f);
	printf("gia tri cua bien float = %f",f);
	
	double d;// %lf, %lf
	scanf("%lf",&d);
	printf("gia tri cua bien double = %lf",d);
		
	return 0;	
}

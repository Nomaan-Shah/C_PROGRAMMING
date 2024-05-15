#include<stdio.h>
int main (){
	int a=10,b=a;
	printf("\n %d",a++);
	//a is 10
	printf("\n %d %d",a,b=a);
	//now a=11 & b=11
  printf("\n %d %d",++a,b=a);
  //a becomes 12 &b 11
	printf("\n %d",a--);
	//a is 12
	printf("\n %d",a);
	//a becomes 11
	return 0;
}



#include<stdio.h>
int  main(){
	int a,b,c,largest;
	printf("\nEnter three numbers\n");
	scanf("%d %d %d",&a,&b,&c);
	largest=a;
	if (b>largest)
	(largest=b);
		if (c>largest)
	(largest=c);
	printf("\nThe largest is: %d",largest);
	return 0;	
}

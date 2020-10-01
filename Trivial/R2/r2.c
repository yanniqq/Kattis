#include <stdio.h>

int main(){

	int num1 = 0;
	int num2 = 0;
	int mean = 0;

	if(scanf("%d %d",&num1, &mean) == 2) {
		num2 = (mean * 2) - num1;
		printf("%d\n",num2);
	} else {
		printf("Something went wrong\n");
		return 1;
	}
	return 0;
}


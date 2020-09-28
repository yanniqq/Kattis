#include <stdio.h>

int main() {
	int num_samples, negative_days, temperature;
	scanf("%d",&num_samples);
	negative_days = 0;
	while(num_samples > 0){
		scanf("%d",&temperature);
		if (temperature < 0 ){
			negative_days++;
		}
		num_samples--;
	}
	printf("%d\n", negative_days);
}

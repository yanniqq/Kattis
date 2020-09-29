#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int int_pow(int base, int exp){
    int result = 1;

    while(1){
        if(exp & 1){
            result = result * base;
        }
        exp >>= 1;
        if (!exp){
            break;
        }
        base = base * base;
    }

    return result;
}

int main(){
    int num = 0;
    int sum = 0;
    int length = 0;
    //int number = 0;
    //int power = 0;
    char input[5];
    char number[4];
    char power[2];
    scanf("%d",&num);   
    while( num > 0 ){
        scanf("%4s",input);
        length = strlen(input);
        strncpy(number,&input[0],length-1);
        strncpy(power,&input[length-1],1);
        number[length-1]='\0';
        power[1]='\0';
        //printf("Number: %s - Power: %s\n",number,power);
        sum = sum + int_pow(atoi(number),atoi(power));       
        num--;
    } 
    printf("%d\n",sum);
    return(0);
}
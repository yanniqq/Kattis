#include <stdio.h>

int lookup_card_value(char card, char suit, char trump){
    int value = 0;
    switch(card){
        case 'A':
            value = 11;
            break;
        case 'K':
            value = 4;
            break;
        case 'Q':
            value = 3;
            break;
        case 'J':
            if(suit == trump){
                value = 20;
            } else {
                value = 2;
            }
            break;
        case 'T':
            value = 10;
            break;
        case '9':
            if(suit == trump){
                value = 14;
            } else {
                value = 0;
            }
	    break;
        //cases 8 and 7 seven are only mentioned for clarity.
        //value already has the proper value of 0
        case '8':
            value = 0;
            break;
        case '7':
            value = 0;
            break;
    }
    return value;
}

int main(){

    int num_hands = 0;
    char trump;
    char input[3];
    int sum = 0;
    scanf("%d", &num_hands);
    scanf("%c",&trump);//get rid of the space
    scanf("%c",&trump);

    while(num_hands > 0){

        for(int i = 0; i<4; i++){
	    scanf("%2s",input);
            int value = lookup_card_value(input[0],input[1],trump);
	    sum += value;
	}
        num_hands--;
    }
    
    printf("%d\n",sum);

    return 0;
}

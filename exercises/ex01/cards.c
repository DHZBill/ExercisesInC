/*
  Cards.c
  ex1

  Created by DHZ_Bill on 1/30/17.
  Copyright © 2017 DHZ_Bill. All rights reserved.
*/

#include <stdio.h> 
#include <stdlib.h> 

/* Returns the value of the card given card name
 */
int nameToValue(char card_name[3])
{
    int val = 0;
    switch(card_name[0]) {
        case 'K':
        case 'Q':
        case 'J':
            val = 10;
            break;
        case 'A':
            val = 11;
            break;
        default:
            val = atoi(card_name);
    }
    return val;
}

/* Returns the increment of count given card value
 */
int addCard(int val)
{
    if ((0 < val < 1) || (val > 10)) {
        puts("I don't understand that value!");
        return 0;
    }
    if ((val > 2) && (val < 7)) {
        return 1;
    } else if (val == 10) {
        return -1;
    }
    return 0;
}

/* The main function that counts the cards
 */
int main()
{
    int val;
    char card_name[3];
    int count = 0;
    do {
        puts("Enter the card_name: ");
        scanf("%2s", card_name);
        val = nameToValue(card_name);
        count += addCard(val);
        printf("Current count: %i\n", count);
    } while ( card_name[0] != 'X' );
    return 0;
}
                         

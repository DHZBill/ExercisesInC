/*
  hello.c
  ex1

  Created by DHZ_Bill on 1/30/17.
  Copyright © 2017 DHZ_Bill. All rights reserved.
*/

#include <stdio.h>
/* I don't see any difference in the assembly code with/without optimization, probably because Mac C compiler
	works differently than others. I discussed with my teammates and looked at their assembly code. There was 
	a different between the codes they run with/without optimization and I think it is because when "x=5" is 
	unused, it is not compiled with optimization and so it doesn't show in the assembly code. But if there is 
	y = x+1, with optimization it would simply compute its value as 6.
*/
int main(){
    int x = 5;
    
    int y = x+1;
    
    printf("%d\n",y);
}


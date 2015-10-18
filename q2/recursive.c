/* FIXME: Implement! */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char smallest_character(char str[], char c, int i){
	if(str[i]!=127){
		if(str[i] > c)
			return str[i];
		else
			return smallest_character(str, c, (i+1));
	}
	return str[0];
}

int main(){
	char str[]={'a','f','g','n','o'},c='p',output;
        assert((smallest_character(str, c, 0)) && "function error!\n");
    	output = smallest_character(str, c, 0);
    	printf("result : %c\n",output);
    	return 0;
}	

/* FIXME: Implement! */
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <string.h>

char smallest_character(char *str, char c) {
	int l = 0, r = strlen(str) - 1;
	char ret = str[0];
	while(l <= r) {
	        int m = l + (r-l) / 2;
	        if(str[m] > c) {
	        	ret = str[m];
                	r = m - 1;
        	} else 
            		l = m + 1;
        	
    	}
    	return ret;
}

int main(){
	char str[]={'a','f','g','n','w'},c='p',output;
    
    	assert((smallest_character(str,c)) && "function error!\n");
    	output = smallest_character(str, c);
    	printf("result : %c\n",output);
    	return 0;
}	

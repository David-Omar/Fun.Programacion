#include <stdio.h>
#include <stdlib.h>

int main(){
	
    int x = 1;
    int y = 1;
    
    while (x < 11){
    	
        printf ("Tabla del %d\n", x);
        while (y < 11){
        	
            printf ("%d X %d = %d\n", x, y, x*y);
            y = y +1;
        }
        
        x = x+1;
        y = 1;
    }

      
    return 0;
}

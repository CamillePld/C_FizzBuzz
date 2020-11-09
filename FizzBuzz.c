#include <stdio.h>
#include <stdlib.h>

#define FIZZ "Fizz"
#define BUZZ "buzz"

int main (void) {
	for (int i=1; i<= 100; i++) {
		if (i% 15==0) {
			printf ("%s%s \n", FIZZ, BUZZ); 
	} else if (i%3== 0) {
	printf ("%s\n", Fizz); 

	}else if (i%5== 0) {
	printf ("%s\n", Buzz);
	}
 }
return EXIT_SUCCESS;
}
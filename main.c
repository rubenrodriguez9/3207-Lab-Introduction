#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(){

	srand((unsigned)time(0));
	// srand(0)
	
	short asciiUpperCase = 65;
	short numLetters = 26;

	char example =  (char) (rand() % numLetters + asciiUpperCase);

	printf("%c\n", example);

}

#include <stdlib.h>
#include "randomHeader.h"
#include <stdio.h>
#include <time.h>
#include <string.h>

int main(){


	srand((unsigned)time(0));
        // srand(0)

        char word[7];

        for(int i = 0;i < 6;i++){
                word[i] = randomchar();
        }

	puts(word);

	return 0;
}


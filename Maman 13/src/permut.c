/*
 * permut.c
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

#include "permut.h"
#include "file.h"

int main(int argc, char *argv[]){
	FILE *fp = NULL; /* file pointer */
	char *line;	/* the reading line */

	/* test if there is all arguments*/
	if(argc != 3){
		fprintf(stderr,"usage: permut filename string");
		exit(1);
	}
	fp = getFile(argv[1]);	/* try to open the file */

	/* read all line from the file */
	while(fgets(line,MAX_CHAR_IN_LINE,fp) != NULL){
		char *word;
		word = strtok(line," \n");
		if(word != NULL){
			/* test if the word is ‫‪permutations‬‬ and print it */
			if(testWord(word,argv[2]) == 1){
				printf("%s/n",word);
			}
		}
		while((word = strtok(NULL," \n")) != NULL){
			/* test if the word is ‫‪permutations‬‬ and print it */
			if(testWord(word,argv[2]) == 1){
				printf("%s\n",word);
			}
		}
	}
	releaseFile(fp);
	exit(0);
}

/**
 * This function will test if two words are ‫‪permutations‬‬ of each other
 *
 * @input
 * word - char pointer to the word to be test
 * letters - char pointer to the letters string
 *
 * @return
 * int -1 if the word is not permutations‬‬ or 1 if it is
 */
int testWord(char *word, char *letters){
	int lettersIndex, wordIndex, wordLength;

	/* test the length of the words an the letters */
	if((wordLength = strlen(word)) != strlen(letters)){
		return -1;
	}

	/* test if all letters are in the word */
	for(lettersIndex = 0; letters[lettersIndex] != 0; lettersIndex++){
		for(wordIndex=0; wordIndex < wordLength; ++wordIndex){
			if (word[wordIndex] == letters[lettersIndex]){
				break;
			}
		}
		if(wordIndex == wordLength){
			return -1;
		}
	}
	return 1;
}

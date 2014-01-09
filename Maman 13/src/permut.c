/*
 * permut.c
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

#include "permut.h"
#include "file.h"

int main(int argc, char *argv[]){
	FILE *fp = NULL;
	char *line;

	if(argc != 3){
		fprintf(stderr,"usage: permut filename string");
		exit(1);
	}
	fp = getFile(argv[1]);
	while(fgets(line,MAX_CHAR_IN_LINE,fp) != NULL){
		char *word;
		word = strtok(line," ");
		if(word != NULL){
			if(testWord(word,argv[2]) == 1){
				printf("%s/n",word);
			}
		}
		while((word = strtok(NULL," ")) != NULL){
			if(testWord(word,argv[2]) == 1){
				printf("%s\n",word);
			}
		}
	}
	releaseFile(fp);
	exit(0);
}

int testWord(char *word, char *letters){
	int lettersIndex, wordIndex, wordLength;
	wordLength = strlen(word);

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

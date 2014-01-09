/*
 * file.c
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

# include "file.h"

FILE * getfile(char *fileName){
	FILE *fp;
	fp = (FILE *)fopen(fileName,"r");
	if(fp == NULL){
		fprintf(stderr,"can't open %s\n",fileName);
		exit(1);
	}
	return fp;
}

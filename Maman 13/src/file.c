/*
 * file.c
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

# include "file.h"

/**
 *  This function get file patch and try to open it, if the file
 *  is opened it return a pointer to the file, else output
 *  error message
 *
 *  @input
 *  char *fileName is the full path of the file
 */
FILE * getFile(char *fileName){
	FILE *fp;
	fp = (FILE *)fopen(fileName,"r");	/* try to open the file */

	/* test if the file was opened */
	if(fp == NULL){
		fprintf(stderr,"can't open %s\n",fileName);
		exit(1);
	}
	return fp;
}

/**
 * This function release the file resource and report an
 * error if it can't release it.
 *
 * @input
 * File *fp  - pointer to file
 */
void releaseFile(FILE *fp){
	int error;
	if((error = fclose(fp)) == 0){
		return;
	}
	exit(error);
}

/*
 * file.h
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

#ifndef FILE_H_
#define FILE_H_

#include <stdio.h>
#include <stdlib.h>
#define MAX_CHAR_IN_LINE 50

#endif /* FILE_H_ */

/**
 *  This function get file patch and try to open it, if the file
 *  is opened it return a pointer to the file, else output
 *  error message
 *
 *  @input
 *  char *fileName is the full path of the file
 */
FILE * getFile(char*);

/**
 * This function release the file resource and report an
 * error if it can't release it.
 *
 * @input
 * File *fp  - pointer to file
 */
void releaseFile(FILE *);

/*
 * file.h
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

#ifndef FILE_H_
#define FILE_H_

#include <stdio.h>
#define MAX_CHAR_IN_LINE 50

#endif /* FILE_H_ */

FILE * getFile(char*);
void releaseFile(FILE *);

/*
 * permut.c
 *
 *  Created on: Jan 9, 2014
 *      Author: avi
 */

#include "permut.h"
#include "file.h"

int main(int argc, char *argv[]){
	FILE *fp;

	if(argc != 3){
		fprintf(stderr,"usage: permut filename string");
		exit(1);
	}
	fp = getfile(argv[1]);
	exit(0);
}

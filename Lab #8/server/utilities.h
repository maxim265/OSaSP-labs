#ifndef SERVER_UTILITIES_H
#define SERVER_UTILITIES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>

int validateQuotes(char* string);
char* removeQuotes(char* string);
int directoriesAmount(const char* path);
char* dirname(char* fullpath, int no);

#endif //SERVER_UTILITIES_H
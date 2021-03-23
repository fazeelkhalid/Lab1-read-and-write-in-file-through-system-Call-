#include<unistd.h>
#include<fcntl.h> 
#include<sys/types.h>
#include<sys/stat.h>
#include<iostream>
using namespace std;

bool isNonAlphabets(char Alpha );
void removeNonAlphabets(char *inputFileName, char *outputFileName);


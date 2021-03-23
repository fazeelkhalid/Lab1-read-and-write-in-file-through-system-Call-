#include"util.h"
void removeNonAlphabets(char *inputFileName, char *outputFileName){
	char *fileChar = new char((char)22); // read character one by one from file
	int readFd = open(inputFileName, O_RDONLY);
	int writeFd = open(outputFileName, O_WRONLY);
	
	while(*fileChar != '\n'){
		read(readFd,fileChar,1);
		
		if(isNonAlphabets(*fileChar)){ // if reading char is an alphabet
			write(writeFd,fileChar,1);
		}
		
		cout<<*fileChar;
	}
	close(readFd);
	close(writeFd);
}

bool isNonAlphabets(char Alpha ){
	if( (Alpha>='A' && Alpha<='Z') || (Alpha>='a' && Alpha<='z') ){
		return 1;
	}
	else{
		return 0;
	}
}


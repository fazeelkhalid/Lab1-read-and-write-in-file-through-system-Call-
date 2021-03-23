#include<iostream>
#include"util.h"
#include"nonAlpha.cpp"

int main(){
	char inFileName[100] ="input.txt";
	char  outFileName[100] = "output.txt";
	removeNonAlphabets(inFileName,outFileName);
	return 0;
}

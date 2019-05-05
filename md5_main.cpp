#include<iostream>
#define _CRT_SECURE_NO_WARNINGS
#include"hash_md5.h"
#include<string>
using namespace std;
int main(int argc, char **argv) {
	
	if(argc > 2 ){
	cout<<"only one string"<<endl;	
	}else if(argc == 2){
	string input = argv[1];
	cout<<"the output for string -->"<<input<<endl;
	cout<<hash_md5(input)<<endl;
	}else {
	cout<<"you have to give a input string"<<endl;
	}
	return 0;
}

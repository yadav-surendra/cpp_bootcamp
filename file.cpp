#include<iostream>
#include<string.h>
using namespace std;
 int main(){

const char *filename = "myfile.txt";
const char *info = " hello i am surendra ";
const char str[20] = "dev ";

// FILE * fh = fopen(filename, "a");
// fputs(info , fh);

// fclose(fh);

int maxbuff = 1024;
char buff[maxbuff];

FILE * fh = fopen(filename , "r");
while(fgets(buff,maxbuff,fh)) {
    fputs(buff,stdout);
}
fclose(fh);
    return 0;
 }

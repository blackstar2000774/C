//Data Type: Integer-short, long, int
//int-Memory Location-4 bytes
//short-Memory Location-2 bytes
//long- Memory occupancy-4 byte
//signed int/short/long 
// unsigned int/short/long 
//int-%d,short-%d/%i,long-%ld
#include <stdio.h>
void main(){
//sizeof() function is used to retrieve the size of each data type
printf("Size of int=%d bytes \n", sizeof(int));
printf("Size of short=%d bytes \n", sizeof(short));
printf("Size of long=%d bytes \n", sizeof(long));
printf("Size of unsigned int=%d bytes \n", sizeof(unsigned int));
printf("Size of unsigned short=%d bytes \n", sizeof(unsigned short));
printf("Size of unsigned long=%d bytes \n", sizeof(unsigned long));
printf("Size of char=%d bytes \n", sizeof(char));
printf("Size of float=%d bytes \n", sizeof(float));
printf("Size of double=%d bytes \n", sizeof(double)); //conversion character=%lf
printf("Size of long double=%d bytes \n", sizeof(long double));
//conversion character =%Lf - not compatible for 64 bit operating system 
}
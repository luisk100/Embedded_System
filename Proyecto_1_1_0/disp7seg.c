
#include <stdio.h>
#include <wiringPi.h>
#include <stdlib.h>
#include <string.h>

int segments[] = {26, 22, 15,11,7,24,13,8};
int digits[] = {19, 21, 23, 18};
unsigned char s[50];
unsigned char num[11][7] ={ 
			{26, 22, 15, 11, 7, 24}, 
			{22, 15, 11},
			{26, 22, 11, 7, 13},
			{26, 22, 15,11,7,13},
			{22, 15,24, 13},
			{26,15, 11, 7, 13},
			{26, 15, 11, 7, 24, 13},
			{26, 22, 15},
			{26, 22, 15, 11, 7, 24, 13},
			{26, 22, 15, 11, 24, 13},
			{8}};

int out(float res)
{
	int cont1,cont2,seg,seg1,dit;
	int n1 = sizeof(segments) / sizeof(int);
	int n2 = sizeof(digits) / sizeof(int);
	
	for (cont1=0; cont1 < n1 ;cont1++){
	pinMode(segments[cont1],OUTPUT);
	digitalWrite(segments[cont1], 0);
	}
    
    for (cont2=0; cont2 < n2 ;cont2++){
	pinMode(digits[cont2], OUTPUT);
	digitalWrite(digits[cont2], 0);
	}
	
	snprintf(s,10,"%f",res);
	int digitSegments;
	
	for (dit=0; dit < strlen(s);dit++){
		
		digitalWrite(digits[dit], 1); // Turn on the digit
		if(s[dit] == ','){
			digitSegments = *num[11];
		}
		else {
			digitSegments = *num[s[dit]];
		}
		for (seg=0; seg < digitSegments; seg++){
			digitalWrite(segments[seg], 1); // Turn on segments

		digitalWrite(dit, 0); // Turn off the digit
		for (seg1=0; seg1 < digitSegments; seg1++){
			digitalWrite(segments[seg1], 0); 
		}
		}
    }
    
	return 0;
}


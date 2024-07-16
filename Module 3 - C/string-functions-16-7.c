
#include <stdio.h>
#include <string.h>


void main(){


char str[50];
char str1[20],str2[20];
int strLength;


// strlen, it returns length of given string

//printf("Enter your string:");
//gets(str);

//strLength=strlen(str);

//printf("Length of given string is: %d", strLength);

// strcpy, it copies second string in first

//printf("Enter first string:");
//gets(str1);
//
//printf("\n--Before copying--");
//printf("\nstr1: %s",str1);
//printf("\nstr2: %s",str2);
//
//strcpy(str2,str1);
//
//printf("\n--After copying--");
//printf("\nstr1: %s",str1);
//printf("\nstr2: %s",str2);
//


// strcat(), it combines second string in first

//printf("Enter first string:");
//gets(str1);
//printf("Enter second string:");
//gets(str2);
//
//printf("\n--Before concatanation--");
//printf("\nstr1: %s",str1);
//printf("\nstr2: %s",str2);
//
//strcat(str1,str2);
//
//printf("\n--After concatanation--");
//printf("\nstr1: %s",str1);
//printf("\nstr2: %s",str2);


//printf("Enter first string:");
//gets(str1);
//printf("Enter second string:");
//gets(str2);
//
//printf("\n--Before comparision--");
//printf("\nstr1: %s",str1);
//printf("\nstr2: %s",str2);
//
//
//
//printf("%d",strcmp(&str1,&str2));


//if(strcmp(str1,str2)){
//    printf("\nBoth strings are same");
//}else{
//    printf("\nBoth strings are NOt same");
//}
//strcat(str1,str2);
//
//printf("\n--After concatanation--");
//printf("\nstr1: %s",str1);
//printf("\nstr2: %s",str2);


// strlwr(), it returns lowercased string

//printf("Enter first string:");
//gets(str1);
//
//printf("\nOriginal string: %s",str1);
//printf("\nLowercase string: %s",strlwr(str1));


// strupr(), it returns uppercased string

//printf("Enter first string:");
//gets(str1);
//
//printf("\nOriginal string: %s",str1);
//printf("\nUppercase string: %s",strupr(str1));


// strrev(), it returns reversed string

printf("Enter first string:");
gets(str1);

printf("\nOriginal string: %s",str1);
printf("\nReversed string: %s",strrev(str1));

//printf("\nReversed string: %s",strrev( strupr(str1)));

}

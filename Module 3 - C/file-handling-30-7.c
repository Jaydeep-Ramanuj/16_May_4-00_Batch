#include <stdio.h>

void main()
{
    FILE *file;
    char data[500];

// fopen(file_name,mode), it is used to open file with specified mode
// fclose(file_name), it is used to close already opened file

// r, it gives permission to read only file
// w, it gives permission to write in file
// (it will remove all existing content and write it there)
// a, it gives permission to write in file
//(it will keep all existing content and write it there)


//    file=fopen("data4.txt","w");
//    fprintf(file,"This is ... text");
//    fclose(file);


//    file=fopen("data3.c","a");
//
//    fprintf(file,"#include<stdio.h>");
//    fprintf(file,"\nvoid main()");
//    fprintf(file,"\n{");
//    fprintf(file,"\nprintf(\"Hello world\");");
//    fprintf(file,"\n}");

//     file=fopen("data5.txt","r");
//   printf("%s",fgets(data,500,file));


file=fopen("data5.txt","r+");
//fprintf(file,"This is something");
printf("%s",fgets(data,500,file));
}

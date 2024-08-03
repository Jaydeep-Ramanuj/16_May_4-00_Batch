#include <stdio.h>
#include <string.h>

struct userData{
    char name[30];
    int age;
    int salary;
};


void main(){
    struct userData users[3];
FILE *file;
char userName[10],temp[30];
    for(int i=0;i<1;i++){
        printf("Enter user data for %d user. ",i+1);
        printf("\nEnter your name: ");
        scanf(" %s",users[i].name);
        printf("\nEnter your age: ");
        scanf("%d",&users[i].age);
        printf("\nEnter your salary: ");
        scanf("%d",&users[i].salary);
    }

    for(int i=0;i<1;i++){
            file=fopen(strcat(users[i].name,".txt"),"a");

//             strcpy(temp,strcat("Name: ",users[i].name));
//             printf("===> %s",temp);
//
////             temp=strcat("Name: ",users[i].name);
//                fprintf(file,temp);
//            fprintf(file,users[i].name);


            fprintf(file,users[i].name);
            fprintf(file,users[i].age);
            fprintf(file,users[i].salary);

            fclose(file);
    }
}

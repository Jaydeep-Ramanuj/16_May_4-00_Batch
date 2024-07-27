#include <stdio.h>

void main()
{
     // initialization;
     //  while(condition){
     //  Code you want to run multiple time
     // increment/decrement;
     //}

     // int result = 0;
     // int counter = 1;
     // int oldResult;
     // while (counter < 10)
     // {
     //      oldResult = result;
     //      result += counter + 1;
     //      printf("%d + %d = %d\n", oldResult, counter + 1, result);
     //      counter++;
     // }

     //    int isStopMessage=1;
     //
     //    while(isStopMessage!=0){
     //        printf("*");
     //    }

     int isRunning = 1;

     while (isRunning)
     {
          printf("Server started, listening on 8000 port.");
          printf("\nTo stop the server, press 0: ");
          scanf("%d", &isRunning);

          if (isRunning == 0)
          {
               printf("Server is shutting down.");
          }
     }
}

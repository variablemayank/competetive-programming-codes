#include<iostream>
#include<ctime>
#include <unistd.h>
using namespace std;

int main(void)
{
   time_t start, end;
   double elapsed;  // seconds
   start = time(NULL);
   int terminate = 1;
   while (terminate) {
     end = time(NULL);
     elapsed = difftime(end, start);
     if (elapsed >= 90.0 /* seconds */)
       terminate = 0;
     else  // No need to sleep when 90.0 seconds elapsed.
       usleep(50000);
   }
   printf("done..\n");
   return 0;
 }

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

//Brexit countdown timer
int main(){
  int sec = 1553900400 - time(0);//seconds remaining until Brexit
  if(sec){
    sleep(1);
    system("clear");
    printf("Brexit Countdown\n");
    printf("days Hours Mins Secs\n");
    printf("%d:  %d:    %d:  %d\n",
            sec/86400, sec/3600%24, 
            sec/60%60, sec%60);
    main();
  }
}

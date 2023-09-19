#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define num 1001
#define hour 51
#define ticket 101
#define favorability 11

int main(){
    srand(time(NULL));
    int task_num;
    scanf("%d", &task_num);
    printf("%d", task_num);
    for(int i=0; i<task_num; i++){
        printf("\n");
        printf("%d ", rand()%hour);
        printf("%d ", rand()%ticket);
        printf("%d", rand()%favorability);
    }

    return 0;
}

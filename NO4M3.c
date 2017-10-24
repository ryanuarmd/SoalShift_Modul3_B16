#include <pthread.h>
#include <stdio.h>

void* thread_faktorial(void* parameter){

int faktorial=1;
int i;

    for(i=(int*)parameter;i>0;--i){
        faktorial *= i;
    printf("%d", faktorial);
}

}
    

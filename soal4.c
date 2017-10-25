#include <pthread.h>
#include <stdio.h>

void* thread_faktorial(void* parameter){
int *x = (int*)parameter;

int faktorial=1;
int i;

    for(i=*x;i>0;--i){
        faktorial *= i;
}
printf("Hasil Dari %d! = %d \n", *x, faktorial);

}
int main(){
    pthread_t tid[100];
    int input_num[100];
    int c=0;
    while(scanf("%d",&input_num[c])!=EOF)
    {
        pthread_create(&(tid[c]), NULL, thread_faktorial,&input_num[c]);
        pthread_join(tid[c],NULL);
        c++;
    }
}
    

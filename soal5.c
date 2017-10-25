#include <string.h>
#include <pthread.h>
#include <stdio.h>

void* cari_nama(void* nama_idola){
    FILE *novel;
    string *nama = (string*)nama_idola
    int jumlah_nama=0;

    //fopen
    novel = fopen("Novel.txt","r");
    
    //mencari kata
    fscanf (novel,"%s",)
    //if(strcmp())
    
    //output nama orang yang telah disebutkan
    printf("%s : %d ", nama, jumlah_nama);
    //tutup file
    fclose(novel);
    
}
int main(){
    pthread_t tid[2];
    string input_nama[10];
    int c=0;

    while(scanf("%s",input_nama[c])!=EOF){
        pthread_create(&tid, NULL, cari_nama,&intput_nama);
        pthread_join(tid[c],NULL);
        c++;
    }

   
}
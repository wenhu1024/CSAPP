#include <stdio.h>

int main(int argc,char *argv[],char *envp[]){
    printf("Command-line arguments:\n");

    int i;
    for(i=0;argv[i]!=NULL;++i){
        printf("argv[ %d]:%s\n",i,argv[i]);
    }
    printf("Environment variables:\n");
        for(i=0;envp[i]!=NULL;++i){
        printf("envp[ %d]:%s\n",i,envp[i]);
    }


    return 0;
}
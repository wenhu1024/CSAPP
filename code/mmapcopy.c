#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mman.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(int argc,char *argv[]){
    if(argc!=2){
        printf("argc should be 2\n");
    }

    int fd=open(argv[1],O_RDWR);
    struct stat stat;
    fstat(fd,&stat);

    char *p;
    p=mmap(NULL,stat.st_size,PROT_READ,MAP_SHARED,fd,0);
    if(p==MAP_FAILED){
        perror("mmap error");
        exit(1);
    }

    write(STDOUT_FILENO,p,stat.st_size);


    return 0;
}
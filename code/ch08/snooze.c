#include <stdio.h>
#include <unistd.h>
#include <signal.h>

void handler(int sig) {
    printf("Caught signal %d\n", sig);
}

int main() {
    // 注册信号处理函数
    signal(SIGALRM, handler);

    // 设置定时器，5秒后发送 SIGALRM 信号
    alarm(5);

    printf("Sleeping for 10 seconds...\n");
    unsigned int remaining = sleep(10);

    if (remaining > 0) {
        printf("Interrupted. Remaining seconds: %u\n", remaining);
    } else {
        printf("Slept for the full 10 seconds.\n");
    }

    return 0;
}

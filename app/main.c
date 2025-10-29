#include <stdio.h>
#include <unistd.h>

int main() {
    while(1) {
        printf("🐳 Hello from Whanos test C app!\n");
        fflush(stdout);
        sleep(5);
    }
    return 0;
}

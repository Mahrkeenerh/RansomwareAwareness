#include <stdio.h>
#include <stdlib.h>

#ifdef _WIN32
#define OS 0
#endif

#ifdef __linux__
#define OS 1
#endif

#ifdef TARGET_OS_MAC
#define OS win
#endif


int main() {

    switch (OS) {

        case 0:
            system("start https://google.com");
            system("start https://google.com");
            break;

        case 1:
            system("xdg-open https://google.com");
            system("xdg-open https://google.com");
            break;

        case 2:
            system("open https://google.com");
            system("open https://google.com");
            break;

    }

    return 0;
}

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
            system("start https://forms.gle/SGHvxJzRgWxyPuYn7");
            system("start https://github.com/Mahrkeenerh/RansomwareAwareness");
            break;

        case 1:
            system("xdg-open https://forms.gle/SGHvxJzRgWxyPuYn7");
            system("xdg-open https://github.com/Mahrkeenerh/RansomwareAwareness");
            break;

        case 2:
            system("open https://forms.gle/SGHvxJzRgWxyPuYn7");
            system("open https://github.com/Mahrkeenerh/RansomwareAwareness");
            break;

    }

    return 0;
}

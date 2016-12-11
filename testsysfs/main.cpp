#include "mainwindow.h"
#include "sysfsgpio.h"
#include <poll.h>
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    SysfsGpio SG(4);
    struct pollfd xfds[0];
    char * fn =  "/sys/class/gpio/gpio4/value";
    int fd = open(fn,O_RDWR);
    xfds[0].events   = POLLPRI | POLLERR;
    xfds[0].revents  = 0;
    xfds[0].fd = fd;
    int rc;
    while(1)
    {
        printf("Waiting for interrupt..\n");
        rc = poll(xfds, 1, 10000);
        printf("poll rc=%d, revents=0x%x\n", rc, xfds[0].revents);
    }
    return a.exec();
}

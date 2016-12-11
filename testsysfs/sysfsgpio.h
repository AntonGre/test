#ifndef SYSFSGPIO_H
#define SYSFSGPIO_H

#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string>

#define SoundPIN 4


class SysfsGpio
{
public:
    SysfsGpio(int pin = SoundPIN);
    ~SysfsGpio();
    // SYSFS function
    int GPIOExport();
    int GPIOUnexport();
    int GPIODirection(int dir);
    int GPIOWrite(int value);
    int GPIOEdge(char *edge);

    // setfunction
    void setPin(int pin);
    void setDirection(int pin);
    void setEdge(std::string edge);
    int getPin() const;
private:
    int pin_;
    int direction_;
    std::string edge_;

};

#endif // SYSFSGPIO_H

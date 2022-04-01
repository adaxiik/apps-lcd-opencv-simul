#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <thread>

class Ticker
{
private:
    std::thread t;
    int delay;

    void (*callback)() = nullptr;

public:
    void attach(void (*callback)(), int delay)
    {
        this->callback = callback;
        this->delay = delay*1000;
    }

    void detach()
    {
        callback = nullptr;
    }

    void loop()
    {
        while (1)
        {
            usleep(this->delay);
            if (this->callback)
                this->callback();
        }
    }
    Ticker()
    {
        t = std::thread(&Ticker::loop, this);
    }
    ~Ticker()
    {
        t.detach();
    }
};

# LCD Simulator
This program is a simple SDL simulator of the MCU LCD module.

# Changes
- Replaced OpenCV with SDL2
- Added buttons (binded to V, B, N, M)
- Added Ticker class

# Notes 
- Ticker class: [Ticker.hpp](https://github.com/adaxiik/ticker)
- Adjust Makefile to your needs 
- Mac seems to have issues with lcd_update() function (Possible "fix" is to add `usleep(10000)` to main loop)
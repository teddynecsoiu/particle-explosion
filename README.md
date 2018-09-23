# Particle Expplosion

Example exerise of c++ made following the tutorials from [this playlist](https://www.youtube.com/playlist?list=PLmpc3xvYSk4wDCP5zjt2QQXe8-JGHa4Kt).

The program does not have any new features but should use at least c++ v11. The program was compiled on Ubuntu using g++ compiler. 

## Prerequisites

The program uses [SDL framework](https://www.libsdl.org/download-2.0.php). At the time of the writing the program was run using SDL 2.0.8.

Because this was run in linux, the header files require it using `#include <SDL2/SDL.h>`. Usually, other systems only want `#include <SDL.h>`.

To make sure you have SDL installed and running correctly, follow [this tutorials](http://lazyfoo.net/tutorials/SDL/01_hello_SDL/index.php).

## Running it

Once you have checked and you have SDL installed and running correctly, open a terminal window, navigate to the location of the project folder, `cd` in it, and execute: 

```
g++ -lSDL -w main.cpp src/screen.cpp src/particle.cpp src/swarm.cpp -o main.o
```
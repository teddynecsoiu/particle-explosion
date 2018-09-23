#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include "src/screen.h"
#include "src/swarm.h"

int main()
{
  std::srand(time(NULL));

  particleBomb::Screen screen;

  if (screen.init() == false)
  {
    std::cout << "SDL initialization error" << std::endl;
  }

  particleBomb::Swarm swarm;

  while (true)
  {
    int elapsed = SDL_GetTicks();

    const particleBomb::Particle *const pParticles = swarm.getParticles();

    unsigned char red = (unsigned char)((1 + sin(elapsed * 0.001)) * 128);
    unsigned char green = (unsigned char)((1 + sin(elapsed * 0.002)) * 128);
    unsigned char blue = (unsigned char)((1 + sin(elapsed * 0.003)) * 128);

    for (int i = 0; i < particleBomb::Swarm::NPARTICLES; i++)
    {
      particleBomb::Particle particle = pParticles[i];

      int x = (particle.m_x + 1) * particleBomb::Screen::SCREEN_WIDTH / 2;
      int y = (particle.m_y + 1) * particleBomb::Screen::SCREEN_HEIGHT / 2;
      screen.setPixel(x, y, red, green, blue);
    }

    // Draw on screen
    screen.update();

    // The exit condition equla to pressing x on the window
    if (screen.processEvents() == false)
    {
      break;
    }
  }

  screen.close();

  return 0;
}

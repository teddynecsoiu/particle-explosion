#ifndef WINDOW_INIT
#define WINDOW_INIT

#include <iostream>
#include <SDL2/SDL.h>

namespace particleBomb
{
class Screen
{
public:
  const static int SCREEN_WIDTH = 800;
  const static int SCREEN_HEIGHT = 600;

private:
  SDL_Window *m_window;
  SDL_Renderer *m_renderer;
  SDL_Texture *m_texture;
  Uint32 *m_buffer1;
  Uint32 *m_buffer2;

public:
  Screen();
  bool init();
  void update();
  void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
  bool processEvents();
  void close();
  void boxBlur();
};
} // namespace particleBomb

#endif
#ifndef PARTICLES_H
#define PARTICLES_H
namespace particleBomb
{
struct Particle
{
  double m_x;
  double m_y;
  double m_speed;
  double m_direction;

public:
  Particle();
  ~Particle();
  void update();
};
} // namespace particleBomb
#endif
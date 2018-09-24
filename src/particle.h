#ifndef PARTICLES_H
#define PARTICLES_H
namespace particleBomb
{
struct Particle
{
  double m_x;
  double m_y;

private:
  double m_speed;
  double m_direction;

public:
  Particle();
  ~Particle();

  void update(int interval);

private:
  void init();
};
} // namespace particleBomb
#endif
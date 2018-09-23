#ifndef SWARM_H
#define SWARM_H

#include "particle.h"

namespace particleBomb
{
class Swarm
{
public:
  const static int NPARTICLES = 5000;

private:
  Particle *m_pParticle;

public:
  Swarm();
  ~Swarm();
  void update();
  const Particle *const getParticles() { return m_pParticle; };
};
} // namespace particleBomb
#endif
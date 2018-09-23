#include "swarm.h"

namespace particleBomb
{
Swarm::Swarm()
{
    m_pParticle = new Particle[NPARTICLES];
}
Swarm::~Swarm()
{
    delete[] m_pParticle;
}

} // namespace particleBomb
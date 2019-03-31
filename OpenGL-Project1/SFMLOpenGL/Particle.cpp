#include "Particle.h"

Particle::Particle(vec3 t_pos)
	: m_rotation(1.0f, 0.0f, 0.0f)
	, m_velocity(0.3, 0.2, 1.25)
	, m_position(t_pos)
	, m_acceleration(0.0f, 0.0f, 0.0f)
{
}

Particle::~Particle()
{
}

void Particle::update(sf::Time t_dt)
{
	m_position = m_position + m_velocity;
	m_velocity = m_velocity + m_acceleration;
	/*m_position -= m_velocity;
	m_velocity *= m_acceleration;*/
	setPosition(m_position);
}

vec3 Particle::getPosition()
{
	return m_position;
}

mat4 Particle::getModelToWorldMatrix()
{
	return mat4(translate(glm::mat4(1.f), m_position) * rotate(glm::mat4(1.f), 0.0f, m_rotation));
}

void Particle::setPosition(vec3 position)
{
	m_position = position;
}

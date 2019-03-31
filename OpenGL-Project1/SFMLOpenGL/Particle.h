#ifndef PARTICLE_H
#define PARTICLE_H

#if !defined(ARRAY_SIZE)
#define ARRAY_SIZE(x) (sizeof((x)) / sizeof((x)[0]))
#endif

#include <stdio.h>
#include <string.h>
#include <Cube.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <SFML/Graphics.hpp>

using namespace glm;

class Particle
{
private:

	//Position of the particle in the world.
	vec3 m_position;

	//Rotation of the particle.
	vec3 m_rotation;

	//Velocity vector of particle.
	vec3 m_velocity;

	vec3 m_acceleration;

public:

	Particle(vec3 t_pos);
	~Particle();

	void update(sf::Time t_dt);

	vec3 getPosition();

	mat4 getModelToWorldMatrix();

	void setPosition(vec3 position);
};

#endif // !PARTICLE_H


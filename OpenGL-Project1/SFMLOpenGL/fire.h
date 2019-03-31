#pragma once
// ParticleSystem.h
#include "Particle.h"
#define maxParticles 60
class fire
{
public:
	fire() {}

	Particle particles[maxParticles]; //creates particles
	sf::Vector2f position;
	//initialises the fire particle by taking in a value for its position
	void Initialise(sf::Vector2f pos)
	{
		position = pos;

		for (int i = 0; i<maxParticles; i++)
		{
			if (particles[i].timetoLive <= 0)
			{
				//sets a random value for its velocity and passes it and a position to the constructor function for new paricle
				particles[i] = Particle(position, sf::Vector2f(rand() / double(RAND_MAX) * 2 - 1, rand() / double(RAND_MAX) * 1 - 2));
			} 
		}
	}

	void Update()
	{
		for (int i = 0; i<maxParticles; i++)
		{
			particles[i].Update(); 
		}
	}
	void Draw(sf::RenderWindow &win)
	{
		for (int i = 0; i<maxParticles; i++)
		{
			particles[i].Draw(win);
		}
	}

};


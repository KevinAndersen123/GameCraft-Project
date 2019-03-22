#pragma once

#include <stdio.h>
#include <string.h>
#include <Cube.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <SFML/Graphics.hpp>

using namespace glm;

class GoalObject
{
private:
	vec3 m_position;

	vec3 m_rotation;

public:
		GoalObject();
		~GoalObject();

		sf::RectangleShape m_collisionBox;

		void update(sf::Time t_deltaTime);

		vec3 getPosition();

		mat4 getModelToWorldMatrix();

		void setPosition(vec3 position);
};
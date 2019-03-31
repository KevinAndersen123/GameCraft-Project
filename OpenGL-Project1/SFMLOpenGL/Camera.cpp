#include "Camera.h"


Camera::Camera()
	: m_viewDirection(0.0f, 0.0f, 0.0f)
	, m_position(10.0f, 10.0f, 0.0f)
	, UP(0.0f, 1.0f, 0.0f)
	, m_offSet(10.0f, 7.0, 12.0f)
{
}
void Camera::update(glm::vec3 t_playerPosition)
{
	m_position = t_playerPosition + m_offSet;
	m_viewDirection = t_playerPosition;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::F1))
	{
		m_offSet = glm::vec3(20,0,0);
	}
	else
		m_offSet = glm::vec3(12.0f, 8.0, 10.0f);
	

}

glm::mat4 Camera::getWorldToViewMatrix() const
{
	return glm::lookAt(m_position, m_viewDirection, UP);
}


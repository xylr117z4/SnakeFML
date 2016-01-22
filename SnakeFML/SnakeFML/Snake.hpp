#pragma once

#include <SFML/Graphics.hpp>

class Snake : public sf::Drawable
{
public:
	Snake(sf::RenderWindow* window);
	~Snake() = default;

	//update the sssssnake
	void update(float dt);

	//handle events
	void handleEvent(sf::Event event);

private:
	
	virtual void		draw(sf::RenderTarget& target, sf::RenderStates states) const;

	sf::RectangleShape	m_snakeBody;	//will be trianglestrip or something fancier eventually

	float				m_direction;	//the current direction of the snake (in degrees)
	float				m_speed;		//current speed (in pixels/second)
	float				m_turnSpeed;	//the speed it can turn at (in degrees/second)

	bool				turningLeft;
	bool				turningRight;

	sf::RenderWindow*	m_window;
};


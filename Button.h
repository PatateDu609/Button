#ifndef BUTTON_H
#define BUTTON_H

#include <SFML/Graphics.hpp>

class Button {
public:
	Button(sf::RenderWindow & w);
	Button(sf::RenderWindow & w, sf::Vector2u & s);
	Button(sf::RenderWindow & w, sf::Text & t);
	Button(sf::RenderWindow & w, sf::Text & t, sf::Vector2u & s);

	sf::Text getText();
	void setText(sf::Text t);

	sf::Vector2u getSize();
	void setSize(sf::Vector2u s);

	~Button();

private:
	sf::Vector2u * size;
	sf::Text * text;
	sf::RectangleShape * rect;
	sf::RenderWindow * window;
};

#endif

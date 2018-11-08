#include "Button.h"

Button::Button(sf::RenderWindow & w) : window(&w) {
	sf::Font cl;
	if (!cl.loadFromFile("/home/boucettaghali/Prog/BridgeGuiLocal/Font/CL.ttf")) {}

	text = new sf::Text();
	text->setFont(cl);
	text->setFillColor(sf::Color::White);
	text->setCharacterSize(24);
	text->setStyle(sf::Text::Bold);
	text->setPosition(50, 10);

	sf::FloatRect locBound = text->getLocalBounds();
	rect = new sf::RectangleShape(sf::Vector2f(2 * locBound.left + locBound.width, 2 * locBound.top + locBound.height));

	window->draw(*rect);
}

Button::Button(sf::RenderWindow & w, sf::Vector2u & s) : window(&w), size(&s) {

}

Button::Button(sf::RenderWindow & w, sf::Text & t) : window(&w), text(&t) {

}

Button::Button(sf::RenderWindow & w, sf::Text & t, sf::Vector2u & s) : window(&w), text(&t), size(&s) {

}

sf::Text Button::getText() {
	return *text;
}

void Button::setText(sf::Text t) {
	text = &t;
}

sf::Vector2u Button::getSize() {
	return *size;
}

void Button::setSize(sf::Vector2u s) {
	if (s.x > 0 && s.y > 0) size = &s;
}

Button::~Button() {
	delete size;
	delete text;
	delete rect;
	delete window;
}

#pragma once

#include "Interface.h"
#include "Animator.h"

class Mainmenu : public Interface {
public:

	enum MenuResult {
		Playing, Exiting
	};

	Mainmenu();
	MenuResult show(sf::RenderWindow& window);
	void click(sf::RenderWindow& window);

private:
};


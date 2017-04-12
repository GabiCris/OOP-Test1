#pragma once
#include "Ctrl.h"

class UI {
public:
	Ctrl c;
	UI::UI() {
		int m, n, x, y;
		std::cout << "m="; std::cin >> m;
		if (m % 2 == 1)
		{
			std::cout << "legth should be even!! m will be decremented by 1!"<<"\n";
			m -= 1;
		}
		std::cout << "n="; std::cin >> n;
		std::cout << "Current X="; std::cin >> x;
		std::cout << "Current Y="; std::cin >> y;

		repo r{ m,n,x,y };
		Ctrl cr{ r };
		this->c = cr;
	};
	UI::UI(Ctrl& ct) { this->c = ct; }

	void appstart();

	void cmoveUp();
	void cmoveDown();
	void cmoveRight();
	void cmoveLeft();
	void show();

	int showPercentage();
};
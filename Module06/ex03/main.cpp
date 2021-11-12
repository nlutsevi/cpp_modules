/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 22:15:35 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/30 21:11:44 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base*	generate(void) {
	int		num;
	Base*	b = NULL;

	srand(time(NULL));
	num = rand()%3;

	switch (num)
	{
	case 0:
		b = new A();
		break;
	case 1:
		b = new B();
		break;
	case 2:
		b = new C();
		break;
	default:
		break;
	}
	return b;
}

void	identify(Base *p) {
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "C" << std::endl;
}

void	identify(Base&	p) {
	try {
		A& a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast) {};
	try {
		B& b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
	}
	catch (std::bad_cast) {};
	try {
		C& c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
	}
	catch (std::bad_cast) {};
}

int		main(void) {
	Base*	d = generate();
	identify(d);
	identify(*d);

	delete(d);
	
	return 0;
}
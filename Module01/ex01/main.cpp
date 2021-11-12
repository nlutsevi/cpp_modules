/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:52:27 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/10 23:40:00 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void) {
	Zombie* zombies;
	
	zombies = zombieHorde(5, "Zombie1 Zombie2 Zombie3 Zombie4 Zombie5");
	zombies[0].announce();
	zombies[1].announce();
	zombies[2].announce();
	zombies[3].announce();
	zombies[4].announce();
	delete []zombies;
}
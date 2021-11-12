/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/10 21:48:44 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/11 00:19:59 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {

	Zombie* horde = new Zombie[N];

	int	n;
	n = 0;
	std::string temp = "";

	for (int i=0; i < (int)name.size() + 1;i++) {
		if (name[i] != ' ' && name[i] != '\0') {
			temp += name[i];
		}
		else {
			horde[n].setName(temp);
			n++;
			temp = "";
		}
	}

	return(horde);
}
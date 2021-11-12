/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 01:03:32 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/22 06:17:39 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_H
# define DIAMONDTRAP_H

# include "ClapTrap.hpp"
# include "FlagTrap.hpp"
# include "ScavTrap.hpp"
# include <iostream>
# include <string>

class DiamondTrap: public ScavTrap, public FlagTrap {
	private:
		std::string		_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const& src);
		DiamondTrap& operator=(DiamondTrap const& src);
		~DiamondTrap(void);

		void		attack(std::string const& target);
		void		whoAmI(void);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/15 02:09:38 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/15 02:27:36 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class	FlagTrap : public ClapTrap {
	public:
		FlagTrap(void);
		FlagTrap(std::string name);
		FlagTrap(FlagTrap const& src);
		FlagTrap& operator=(FlagTrap const& src);
		~FlagTrap(void);

		void	highFivesGuys(void);
};

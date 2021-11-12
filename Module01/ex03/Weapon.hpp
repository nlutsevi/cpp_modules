/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 01:05:58 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/11 20:18:26 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Weapon {
	private:
		std::string _weapon;
	public:
		Weapon(void);
		Weapon(std::string weapon);
		~Weapon(void);

		void				setType(std::string weapon);
		std::string	const 	getType(void) const;
};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:47:55 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/03 17:12:17 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void): _n(42) { return; }
		int		get(void) const { return this->_n; }
	private:
		int		_n;
};

std::ostream&		operator<<(std::ostream& o, Awesome const& rhs) {o << rhs.get(); return o; }


template<typename T>
void		print(T const& x) { std::cout << x << std::endl; return; }

int			main (void)
{
	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return 0;
}
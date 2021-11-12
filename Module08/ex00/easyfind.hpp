/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:42:56 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/10 00:14:20 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_H
# define EASYFIND_H

# include <iostream>
# include <list>

class EasyfindException : public std::exception
{
	public:
		virtual const char* what() const throw() {
			return ("❌ The supplied number couldn't be found ❌");
		}
};

template <typename T>
std::list<int>::const_iterator 		easyfind(T &container, int const n)
{
	std::list<int>::const_iterator	it = std::find(container.begin(), container.end(), n);
	if (it == container.end())
	{
		throw EasyfindException();
		return it;
	}
	else
		return it;
}

#endif
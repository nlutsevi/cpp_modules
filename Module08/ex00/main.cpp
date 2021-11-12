/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:56:13 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/11 20:34:19 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int		main(void)
{
	std::list<int>		lst;

	lst.push_back(3);
	lst.push_back(33);
	lst.push_back(333);

	std::list<int>::const_iterator 	it;
	int								n;
	try{
		n = 2;
		it = easyfind(lst, n);
		std::cout << "Number "<< n << " found!" << std::endl; 
	}
	catch (EasyfindException& e)
	{
		std::cout << e.what() << std::endl;
	}


	return 0;
}
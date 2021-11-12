/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 23:58:24 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/11 20:42:17 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
	Span sp = Span(5);

	try
	{
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		for (int i = 0; i < 5; i++)
			std::cout << sp.getContainer()[i] << std::endl;
	}
	catch(Span::OutOfRangeException& e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << "ShortestSpan: " << sp.shortestSpan() << std::endl;
		std::cout << "LongestSpan: " << sp.longestSpan() << std::endl;
	}
		catch(Span::EmptyContainerException& e)
	{
		std::cout << e.what() << std::endl;
	}

	Span sp2 = Span(10000);

	try
	{
		sp2.addNumbers(sp2.getContainer().begin(), sp2.getContainer().end());

		for (int i = 0; i < 10000; i++)
				std::cout << "i-" << i << ": " << sp2.getContainer()[i] << std::endl;
	}
	catch(Span::OutOfRangeException& e)
	{
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
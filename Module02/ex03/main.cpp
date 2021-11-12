/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:53:55 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/21 20:07:11 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <stdio.h>

int		main(void) {
	Point	a(1, 0);
	Point	b(4, 6);
	Point	c(7, 0);
	Point	p(4,2);
	

	if (bsp(a, b, c, p))
		std::cout << "El punto está dentro del triángulo" << std::endl;
	else
		std::cout << "El punto está fuera del triángulo" << std::endl;
	
	return 0;
}
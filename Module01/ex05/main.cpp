/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/12 00:14:35 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/12 00:49:41 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int main() {
	Karen k;

	std::cout << "Karen complains DEBUG:" << std::endl;
	k.complain("DEBUG");

	std::cout << "\nKaren complains INFO:" << std::endl;
	k.complain("INFO");

	std::cout << "\nKaren complains WARNING:" << std::endl;
	k.complain("WARNING");

	std::cout << "\nKaren complains ERROR:" << std::endl;
	k.complain("ERROR");

	return 0;
}
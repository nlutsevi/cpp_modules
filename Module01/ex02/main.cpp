/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 00:31:02 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/11 00:43:13 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int 	main(void) {
	std::string str = "HI THIS IS BRAIN";

	std::string*	stringPtr = &str;
	std::string&	stringRef = str;

	std::cout << "By str: " << &str << std::endl;
	std::cout << "By Ptr: " << stringPtr << std::endl;
	std::cout << "By Ref: " << &stringRef << std::endl << std::endl;

	std::cout << "By Ptr: " << *stringPtr << std::endl;
	std::cout << "By Ref: " << stringRef << std::endl;
}
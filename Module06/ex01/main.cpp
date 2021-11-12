/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 20:11:27 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/26 20:33:52 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct 	Data
{
	int		x;
} 				Data;

uintptr_t 		serialize(Data *ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data 			*deserialize(uintptr_t raw) {
	return reinterpret_cast<Data*>(raw);
}


int		main(void) {
	uintptr_t 	s;
	Data 		data;
	Data		*data_ptr;

	data.x = 42;

	s = serialize(&data);
	data_ptr = deserialize(s);

	std::cout << "Data.x = " << data.x << std::endl;
	std::cout << "uintptr_t s (serialize)= " << s << std::endl;
	std::cout << "data_ptr->x (deserialize) = " << data_ptr->x << std::endl << std::endl;

	std::cout << "Dirección de data_ptr: "<< data_ptr << std::endl;
	std::cout << "Dirección de data: " << &data << std::endl;

	return 0;
}
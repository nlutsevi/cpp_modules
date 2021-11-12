/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 21:38:53 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/02 19:34:10 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
# define ITER_H

#include <iostream>

template<typename T>
void	function(T const& i) {
	std::cout << "i: " << i << std::endl;
}

template<typename T>
void	iter(T* array, int	len, void (*f)(T const& i)) {
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 23:10:23 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/27 23:29:07 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_H
# define WHATEVER_H

# include <iostream>

template <typename T>
void		swap(T& x, T& y) {
	T	aux(x);
	
	x = y;
	y = aux;
}

template <typename T>
T const		min(T const& x, T const& y) {
	return ((x < y) ? x : y);
}

template <typename T>
T const		max(T const& x, T const& y) {
	return ((x > y) ? x : y);
}

#endif
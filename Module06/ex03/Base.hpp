/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 21:59:53 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/10/27 01:21:04 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_H
# define BASE_H

# include <stdlib.h>
# include <time.h>
# include <iostream>

class Base {
	public:
		virtual ~Base(void) {};
};

class A : public Base {};

class B : public Base {};

class C : public Base {};

#endif
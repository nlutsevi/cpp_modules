/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 20:44:53 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/21 19:59:50 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
# define POINT_H

# include "Fixed.hpp"
# include <iostream>

class Point {
	private:
		Fixed const _x;
		Fixed const _y;
	public:
		Point(void);
		Point(Fixed const x, Fixed const y);
		Point(Point const& src);
		~Point(void);

		Point&				operator=(Point const& src);
		Fixed const&		getX(void) const;
		Fixed const&		getY(void) const;
};

bool		bsp(Point const& a, Point const& b, Point const& c, Point const& p);

#endif


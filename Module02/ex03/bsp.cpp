/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 21:13:00 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/21 20:06:02 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include "Point.hpp"
#include <iostream>
#include <stdio.h>

bool		bsp(Point const& a, Point const& b, Point const& c, Point const& p) {
	float	aa;
	float	bb;
	float	cc;

	aa = (((p.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat())) - ((p.getY().toFloat() - a.getY().toFloat()) * (b.getX().toFloat() - a.getX().toFloat())));
	bb = (((p.getX().toFloat() - b.getX().toFloat()) * (c.getY().toFloat() - b.getY().toFloat())) - (((p.getY().toFloat() - b.getY().toFloat()) * (c.getX().toFloat() - b.getX().toFloat()))));
	cc = (((p.getX().toFloat() - c.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat())) - (((p.getY().toFloat() - c.getY().toFloat()) * (a.getX().toFloat() - c.getX().toFloat()))));

	if ((aa > 0 && bb > 0 && cc > 0) || (aa < 0 && bb < 0 && cc < 0))
		return 1;
	else
		return 0;
}
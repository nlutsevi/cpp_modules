/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:24:02 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/13 23:44:51 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <math.h>

class Fixed {
	private:
		int _n;
		static const int _nbits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const& src);
		Fixed(int const raw);
		Fixed(float const raw);
		~Fixed(void);

		Fixed&		operator=(Fixed const& rhs);
		int			getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int			toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& i);


#endif
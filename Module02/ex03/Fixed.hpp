/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:24:02 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/17 21:45:02 by nlutsevi         ###   ########.fr       */
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

		Fixed&				operator=(Fixed const& rhs);
		bool				operator>(Fixed const& rhs) const;
		bool				operator<(Fixed const& rhs) const;
		bool				operator>=(Fixed const& rhs) const;
		bool				operator<=(Fixed const& rhs) const;
		bool				operator==(Fixed const& rhs) const;
		bool				operator!=(Fixed const& rhs) const;
		Fixed				operator+(Fixed const& rhs);
		Fixed				operator-(Fixed const& rhs) const;
		Fixed				operator*(Fixed const& rhs);
		Fixed				operator/(Fixed const& rhs);
		Fixed&				operator++(void);
		Fixed				operator++(int raw);
		Fixed&				operator--(void);
		Fixed				operator--(int raw);
		static Fixed const&	min(Fixed const& n1, Fixed const& n2);
		static Fixed&		min(Fixed& n1, Fixed& n2);
		static Fixed const&	max(Fixed const& n1, Fixed const& n2);
		static Fixed&		max(Fixed& n1, Fixed& n2);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
};

std::ostream&	operator<<(std::ostream& o, Fixed const& i);
Fixed const&	min(Fixed const& n1, Fixed const& n2);
Fixed&			min(Fixed& n1, Fixed& n2);
Fixed const&	max(Fixed const& n1, Fixed const& n2);
Fixed&			max(Fixed& n1, Fixed& n2);


#endif
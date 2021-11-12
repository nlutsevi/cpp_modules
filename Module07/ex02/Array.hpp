/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 19:38:37 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/04 18:22:58 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_H
# define ARRAY_H

# include <iostream>

template <typename T>
class Array {
	public:
		Array(void) : _array(new T[NULL]()), _size(0) {}
		Array(unsigned int n) : _array(new T[n]()), _size(n) {}
		Array(Array<T> const& src) { *this = src; }
		~Array(void) { delete [] this->_array; }
		size_t			getSize(void) const { return this->_size; }
		Array&			operator=(Array<T> const& src) 
		{
			this->_size = src.getSize();
			this->_array = new T[src.getSize()]();
			for (size_t i = 0; i < src.getSize(); i++)
				this->_array[i] = src[i];
			return *this;
		}
		T&				operator[](T index)
		{
			if (index < 0 || index >= this->_size)
				throw OutOflimitsException();
			return this->_array[index];
		}

		T const&				operator[](T const index) const
		{
			if (index < 0 || index >= this->_size)
				throw OutOflimitsException();
			return this->_array[index];
		}
		class OutOflimitsException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("❌ Index introduced is out of limits ❌");
				}

		};
	private:
		T*		_array;
		int		_size;
};



#endif
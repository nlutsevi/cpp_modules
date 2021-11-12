/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 22:43:19 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/10 01:24:18 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_H
# define SPAN_H

# include <iostream>
# include <vector>

class Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_container;
	public:
		Span(unsigned int size);
		Span(Span const& src); 
		~Span(void);
		
		Span&				operator=(Span const& src);
		unsigned int		getSize(void) const;
		std::vector<int>	getContainer(void) const;
		void				addNumber(int const n);
		void				addNumbers(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end);
		int					shortestSpan(void) const;
		int					longestSpan(void) const;
		class OutOfRangeException : public std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("❌ Container is full ❌");
				}
		};
		class EmptyContainerException : std::exception
		{
			public:
				virtual const char* what() const throw() {
					return ("❌ Container is empty or only have one value ❌");
				}
		};
};

#endif
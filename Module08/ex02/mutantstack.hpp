/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 02:54:38 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/11 04:57:51 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_H
# define MUTANTSTACK_H

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		typedef typename std::stack<T>::container_type::iterator					iterator;
		typedef typename std::stack<T>::container_type::const_iterator				const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator			reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

		MutantStack(void) : std::stack<T>() {};
		MutantStack(MutantStack<T> const& src) : std::stack<T>(src) {};
		virtual ~MutantStack(void) {};

		MutantStack&	operator=(MutantStack const& src)
		{
			std::stack<T>::operator=(src);
			return *this;
		}

		iterator	begin()
		{
			return this->c.begin();
		}
		iterator	end()
		{
			return this->c.end();
		}
		const_iterator	begin() const
		{
			return this->c.begin();
		}
		const_iterator	end() const
		{
			return this->c.end();
		}
		reverse_iterator	rbegin()
		{
			return this->c.rbegin();
		}
		reverse_iterator	rend()
		{
			return this->c.rend();
		}
		const_reverse_iterator	rbegin() const
		{
			return this->c.rbegin();
		}
		const_reverse_iterator	rend() const
		{
			return this->c.rend();
		}
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 00:34:24 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/11/11 01:07:19 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int size) : _size(size), _container() {}

Span::Span(Span const& src)
{
	this->_size = src.getSize();
	this->_container = src.getContainer();
}

Span::~Span() {}

Span&				Span::operator=(Span const& src)
{
	this->_size = src.getSize();
	this->_container = src.getContainer();

	return *this;
}

unsigned int		Span::getSize(void) const
{
	return this->_size;
}

std::vector<int>	Span::getContainer(void) const
{
	return this->_container;
}

void				Span::addNumber(int const n)
{
	if (this->_container.size() < this->_size)
		this->_container.push_back(n);
	else
		throw OutOfRangeException();
}

void				Span::addNumbers(std::vector<int>::const_iterator start, std::vector<int>::const_iterator end)
{
	(void)start;
	(void)end;
	if (this->_container.size() < this->_size)
	{
		srand(time(NULL));
		for (unsigned int i = 0; i < this->_size; i++)
		{
			int num = 1 + rand() % (11 - 1);
			this->addNumber(num);
		}
	}
	else
		throw OutOfRangeException();
}

int					Span::shortestSpan(void) const
{
	if (this->_size > 1)
	{
		int min = this->_container[0] - this->_container[1];
		for (unsigned int i = 0; i < this->_size; i++)
		{
			for (unsigned int y = 0; y < this->_size; y++)
			{
				if (y == i)
					y++;
				int tmp = abs(this->_container[y] - this->_container[i]);
				if (tmp < min)
					min = tmp;
			}
		}
		return min;
	}
	else
		throw EmptyContainerException();
}				

int					Span::longestSpan(void) const
{
	if (this->_size > 1)
	{
		int max = *std::max_element(this->_container.begin(), this->_container.end());
		int min = *std::min_element(this->_container.begin(), this->_container.end());
		int maxSpan = max - min;

		return maxSpan;
	}
	else
		throw EmptyContainerException();
}
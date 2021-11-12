/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/11 22:32:23 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/09/12 00:43:15 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Karen {
	private:
		void		debug (void);
		void		info (void);
		void		warning (void);
		void		error (void);
	public:
		Karen(void);
		~Karen(void);
		void		complain (std::string level);
};
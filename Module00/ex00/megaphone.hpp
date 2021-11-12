/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 22:55:17 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/26 00:46:26 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEGAPHONE_H
# define MEGAPHONE_H

// ************************************************************************** //
//                               Megaphone Class                                //
// ************************************************************************** //

class Megaphone {

	public:

		Megaphone(void);
		~Megaphone(void);

		void 			getWord(void) const;
		void 			getWord2(void) const;
		void 			setWord(std::string word);
		std::string		captalizeString(std::string s) const;
		
	private:

		std::string		_word;
};

#endif /* __MEGAPHONE_H__ */
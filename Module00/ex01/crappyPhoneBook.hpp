/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   crappyPhoneBook.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nlutsevi <nlutsevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 02:06:16 by nlutsevi          #+#    #+#             */
/*   Updated: 2021/08/26 00:47:14 by nlutsevi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CRAPPYPHONEBOOK_H
# define CRAPPYPHONEBOOK_H

// ************************************************************************** //
//                               Contact Class                                //
// ************************************************************************** //

class Contact {
	public:
		Contact(void);
		~Contact(void);

		void			getContact(void) const;
		void			setContact(void);
		std::string		getName(void) const;
		std::string		getSurname(void) const;
		std::string		getNick(void) const;
	private:
		std::string		_first_name;
		std::string		_last_name;
		std::string		_nickname;
		std::string		_phone;
		std::string		_secret;
		int				_pos;
};

// ************************************************************************** //
//                               PhoneBook Class                                //
// ************************************************************************** //


class PhoneBook {
	public:
		PhoneBook(void);
		~PhoneBook(void);

		std::string		option;

		void			addContact(void);
		void			searchContact(void);
		void			printContact(void) const;
	private:
		int				_pos;
		int				_search_pos;
		std::string		_search_pos_str;

		Contact		_contacts[8];
};

#endif /* __CRAPPYPHONEBOOK_H__ */
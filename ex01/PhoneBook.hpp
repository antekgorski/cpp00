/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:46:06 by agorski           #+#    #+#             */
/*   Updated: 2025/04/10 14:55:31 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
    int count;

public:
    PhoneBook();
    ~PhoneBook();
    void addContact(string FirstName, string LastName, string Nickname, string PhoneNumber, string DarkestSecret);
    void displayContacts();
};

#endif

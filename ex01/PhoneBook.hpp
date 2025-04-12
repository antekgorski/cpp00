/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:46:06 by agorski           #+#    #+#             */
/*   Updated: 2025/04/12 19:50:35 by agorski          ###   ########.fr       */
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

public:
    //constructor
    PhoneBook();
    void addContact();
    void displayContacts();
    void searchContact();
    std::string getCutedString(std::string str);
};

#endif

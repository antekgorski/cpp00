/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:10:59 by agorski           #+#    #+#             */
/*   Updated: 2025/04/10 15:04:37 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    index = 0;
    count = 0;
}

PhoneBook::~PhoneBook()
{
}
void PhoneBook::addContact( std::string FirstName,  std::string LastName,  std::string Nickname,  std::string PhoneNumber,  std::string DarkestSecret)
{
    if (index < 8)
    {
        contacts[index] = Contact(FirstName, LastName, Nickname, PhoneNumber, DarkestSecret);
        index++;
        if (count < 8)
            count++;
        count++;
        if (index == 8)
            index = 0;
    }
}

void PhoneBook::displayContacts()
{
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;

}

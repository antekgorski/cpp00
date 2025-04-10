/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:10:59 by agorski           #+#    #+#             */
/*   Updated: 2025/04/10 14:52:59 by agorski          ###   ########.fr       */
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
void PhoneBook::addContact(string FirstName, string LastName, string Nickname, string PhoneNumber, string DarkestSecret)
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
    for (int i = 1; i <= count; i++)
    {
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << contacts[i - 1].FirstName << "|";
        
    }
}

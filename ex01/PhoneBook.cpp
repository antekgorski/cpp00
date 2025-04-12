/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 14:10:59 by agorski           #+#    #+#             */
/*   Updated: 2025/04/12 22:30:50 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
}

void PhoneBook::addContact()
{
    std::string t_FirstName, t_LastName, t_Nickname, t_PhoneNumber, t_DarkestSecret;

    std::cout << "Please enter first name: ";
    std::getline(std::cin, t_FirstName);
    std::cout << "Please enter last name: ";
    std::getline(std::cin, t_LastName);
    std::cout << "Please enter nickname: ";
    std::getline(std::cin, t_Nickname);
    std::cout << "Please enter phone number: ";
    std::getline(std::cin, t_PhoneNumber);
    std::cout << "Please enter darkest secret: ";
    std::getline(std::cin, t_DarkestSecret);

    if (t_FirstName.empty() || t_LastName.empty() || t_Nickname.empty() || t_PhoneNumber.empty() || t_DarkestSecret.empty())
    {
        std::cout << "Contact don't added, Please fill in all the fields." << std::endl;
        return;
    }
    else
    {
        contacts[index % 8].setFirstName(t_FirstName);
        contacts[index % 8].setLastName(t_LastName);
        contacts[index % 8].setNickname(t_Nickname);
        contacts[index % 8].setPhoneNumber(t_PhoneNumber);
        contacts[index % 8].setDarknestSecret(t_DarkestSecret);
        index++;
        std::cout << "Contact added successfully!" << std::endl;
    }
}

std::string PhoneBook::getCutedString(std::string str)
{
    if (str.length() > 10)
    {
        str = str.substr(0, 9);
        str += ".";
    }
    return str;
}

void PhoneBook::displayContacts()
{
    int inIndex = 0;
    int i = 0;

    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|Phone Nbr.|Darkest S.|" << std::endl;
    std::cout << "|-----------------------------------------------------------------|" << std::endl;
    while (i < 8 && !contacts[i].isEmpty())
    {
        std::cout << "|" << std::setw(10) << i
                  << "|" << std::setw(10) << getCutedString(contacts[i].getFirstName())
                  << "|" << std::setw(10) << getCutedString(contacts[i].getLastName())
                  << "|" << std::setw(10) << getCutedString(contacts[i].getNickname())
                  << "|" << std::setw(10) << getCutedString(contacts[i].getPhoneNumber())
                  << "|" << std::setw(10) << getCutedString(contacts[i].getDarkestSecret())
                  << "|" << std::endl;
        i++;
    }
    std::cout << "-------------------------------------------------------------------" << std::endl;
    std::cout << "Please enter the index of the contact you want to see: ";
    std::cin >> inIndex;
    if (std::cin.good() && inIndex >= 0 && inIndex < 8 && !contacts[inIndex].isEmpty())
    {
        contacts[inIndex].showContactDetails();
        std::cin.ignore(1000, '\n');
    }
    else
    {
        if (std::cin.eof())
            return;
        std::cout << "Invalid index. Please try again." << std::endl;
        std::cin.clear();
        std::cin.ignore(1000, '\n');
    }
}

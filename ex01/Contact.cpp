/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:45:31 by agorski           #+#    #+#             */
/*   Updated: 2025/04/12 22:19:53 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->FirstName = "";
    this->LastName = "";
    this->Nickname = "";
    this->PhoneNumber = "";
    this->DarkestSecret = "";
}

void Contact::setFirstName(std::string FirstName)
{
    this->FirstName = FirstName;
}

void Contact::setLastName(std::string LastName)
{
    this->LastName = LastName;
}

void Contact::setNickname(std::string Nickname)
{
    this->Nickname = Nickname;
}

void Contact::setPhoneNumber(std::string PhoneNumber)
{
    this->PhoneNumber = PhoneNumber;
}

void Contact::setDarknestSecret(std::string DarkestSecret)
{
    this->DarkestSecret = DarkestSecret;
}

std::string Contact::getFirstName()
{
    return this->FirstName;
}

std::string Contact::getLastName()
{
    return this->LastName;
}

std::string Contact::getNickname()
{
    return this->Nickname;
}

std::string Contact::getPhoneNumber()
{
    return this->PhoneNumber;
}

std::string Contact::getDarkestSecret()
{
    return this->DarkestSecret;
}

void Contact::showContactDetails()
{
    std::cout << "first name: " << FirstName << std::endl;
    std::cout << "last name: " << LastName<< std::endl;
    std::cout << "nickname: " << Nickname << std::endl;
    std::cout << "phone number: " << PhoneNumber << std::endl;
    std::cout << "darkest secret: " << DarkestSecret << std::endl;
}

bool Contact::isEmpty()
{
    return (FirstName.empty() && LastName.empty() && Nickname.empty() && PhoneNumber.empty() && DarkestSecret.empty());
}

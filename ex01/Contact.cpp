/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:45:31 by agorski           #+#    #+#             */
/*   Updated: 2025/04/10 15:12:21 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    FirstName = "";
    LastName = "";
    Nickname = "";
    PhoneNumber = "";
    DarkestSecret = "";
}

Contact::Contact( std::string FirstName,  std::string LastName,  std::string Nickname,  std::string PhoneNumber,  std::string DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->Nickname = Nickname;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}

std::string Contact::getContact()
{

        std::cout << std::setw(10) << 
    
}
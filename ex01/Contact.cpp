/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:45:31 by agorski           #+#    #+#             */
/*   Updated: 2025/04/09 19:32:03 by agorski          ###   ########.fr       */
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

Contact::Contact(string FirstName, string LastName, string Nickname, string PhoneNumber, string DarkestSecret)
{
    this->FirstName = FirstName;
    this->LastName = LastName;
    this->Nickname = Nickname;
    this->PhoneNumber = PhoneNumber;
    this->DarkestSecret = DarkestSecret;
}

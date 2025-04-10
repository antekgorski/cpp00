/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:44:13 by agorski           #+#    #+#             */
/*   Updated: 2025/04/10 14:56:54 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>

using std::string;

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
public:
    Contact();
    Contact(string FirstName, string LastName, string Nickname, string PhoneNumber, string DarkestSecret);
    Contact::getContact();
};

#endif
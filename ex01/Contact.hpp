/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:44:13 by agorski           #+#    #+#             */
/*   Updated: 2025/04/11 17:06:34 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
    std::string FirstName;
    std::string LastName;
    std::string Nickname;
    std::string PhoneNumber;
    std::string DarkestSecret;
    
public:
    //seters
    void setFirstName(std::string FirstName);
    void setLastName(std::string LastName);
    void setNickname(std::string Nickname);
    void setPhoneNumber(std::string PhoneNumber);
    void setDarknestSecret(std::string DarkestSecret);
    //geters
    std::string getFirstName();
    std::string getLastName();
    std::string getNickname();
    std::string getPhoneNumber();
    std::string getDarkestSecret();
    //other methods
    void showContactDetails(int index);
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 15:43:01 by agorski           #+#    #+#             */
/*   Updated: 2025/04/12 22:30:09 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main()
{
    std::string command = "";
    PhoneBook phoneBook;

    while (1)
    {
        if (std::cin.eof())
            break;
        std::cout << "Please enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);
        if (command == "ADD")
            phoneBook.addContact();
        else if (command == "SEARCH")
            phoneBook.displayContacts();
        else if (command == "EXIT" || std::cin.eof())
            break;
        else
            std::cout << "Invalid command. Please try again." << std::endl;
    }
    return 0;
}

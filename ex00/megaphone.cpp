/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agorski <agorski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 15:40:00 by agorski           #+#    #+#             */
/*   Updated: 2025/04/07 11:29:26 by agorski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int argc, char *argv[])
{
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for (int j = 1; argv[j]; j++)
            {
                for (int i = 0; argv[j][i]; i++)
                {
                   std::cout << (char)std::toupper(argv[j][i]);
                }
                std::cout << " ";
            }
        std::cout << std::endl;
    }
    return 0;
}
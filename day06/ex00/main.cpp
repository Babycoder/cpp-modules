/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayghazal <ayghazal@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/02 15:36:36 by ayghazal          #+#    #+#             */
/*   Updated: 2021/10/05 13:11:35 by ayghazal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.hpp"

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
      std::cout << "Wrong number of arguments" << std::endl;
      return 0;
    }
    Convertor	convertor(argv[1]);
    convertor.convert();
    return 0;
}
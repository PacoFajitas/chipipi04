/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tfiguero < tfiguero@student.42barcelona    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/09 19:12:09 by tfiguero          #+#    #+#             */
/*   Updated: 2024/06/09 21:00:15 by tfiguero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "iostream"

class Brain
{
    private:
        std::string _ideas[100];
    public:
        Brain();
        Brain(const Brain& old);
        Brain& operator=(const Brain& old);
        ~Brain();
};
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 21:41:26 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/18 21:47:05 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain&);
		Brain& operator=(const Brain&);
};

#endif
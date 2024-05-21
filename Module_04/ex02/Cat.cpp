/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zelabbas <zelabbas@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:26:41 by zelabbas          #+#    #+#             */
/*   Updated: 2024/05/19 12:34:27 by zelabbas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Default Cat constructor called" << std::endl;
	this->brain = new(std::nothrow) Brain();
	if (!this->brain)
	{
		std::cout << "Faild to allocate memory" << std::endl;
		exit(-1);
	}
	this->type = "Cat";
}

Cat::Cat(const std::string& type) : Animal(type)
{
	std::cout << "Default Cat constructor by name called" << std::endl;
}

Cat::Cat(const Cat& obj)
{
	std::cout << "copy Cat constructor called" << std::endl;
	*this = obj;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "Cat Destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& obj)
{
	std::cout << "Cat assignment operator called" << std::endl;
	if (this != &obj)
	{
		Animal::operator=(obj);
		this->brain = obj.brain;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Sound..." << std::endl;
}
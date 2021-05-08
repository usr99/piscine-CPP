/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 13:30:17 by mamartin          #+#    #+#             */
/*   Updated: 2021/05/08 03:07:39 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"  
	
ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("shrubbery creation", 145, 137, target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& src) : Form(src) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	Form::checkIfExecutable(executor);
	
	std::ofstream	file(this->getTarget().append("_shrubbery").data());
	file << "                                            ///   */,                           " << std::endl;
	file << "                                **         ///*//**/// /  *                     " << std::endl;
	file << "                      ,***,  *********.  ///////////*//////                     " << std::endl;
	file << "                   ***,,,*,,,***,*****///////##(##%#///(//////                  " << std::endl;
	file << "                  **,,**,**,,*,****#///////#(%#/,*%###/////(                    " << std::endl;
	file << "                 *,*,********,****//((,,,,,((,,,,,.*#/###(/*/#(#(##             " << std::endl;
	file << "                *******,*******/*////*,,,.,,.,,,,,,*(###(####(###(## *          " << std::endl;
	file << "             ///#/*******//*****///,,..,..,,,,,,,,***(##(##(//**/#(###(/(#      " << std::endl;
	file << "           (/*/(/(##%/*///////////*,,,,*,,,,,,,*,,*****#///**/**//(&%###(((#    " << std::endl;
	file << "           ///////((/#///////////,***,******,,***&*#**#//////(////((((######    " << std::endl;
	file << "        //*////////((///(((######(#(((/,/******/**####((%%(((&&&(((((%##%%##%%  " << std::endl;
	file << "     /(//////(////*******%(%(#(##((((((##****(%%#@&((*/###(((%%####&%%%%%%%%%/  " << std::endl;
	file << "    (////*/(**#/**********#***%#(#((((############/////////*/&%###(###(#####%%  " << std::endl;
	file << "  ,(((////(((***,**,,,*,,****/(/////((###//////#(/////////////#%%%########%%%%  " << std::endl;
	file << "    .(//(/((****,*,*************//((/####/////*/////*////////(((&######%%%%%    " << std::endl;
	file << "    .((((((*,,**************/**/((////(/*//////////////////(((&%%######%        " << std::endl;
	file << "        /((**,*,***/*****/****/@&&(/(##////(@&@@((///////(((&%%%%%%%%%.         " << std::endl;
	file << "        /(*,,********/////////&%%##&&%&((((&(%&%%&((////(((%%%%#%%%%            " << std::endl;
	file << "         .****/******(/(%##########%##&#%%#%@###%##(#(((%%%%%%%%%%              " << std::endl;
	file << "             //***/////%#####  (## #(((@##/& #/##(%%%%%%%%%%                    " << std::endl;
	file << "               ((((/////## ,         &/(##(#         %%                         " << std::endl;
	file << "                    ///               (/((((.                                   " << std::endl;
	file << "                                      #((((#&                                   " << std::endl;
	file << "                                      *((((&@                                   " << std::endl;
	file << "                                     *(((/(#                                    " << std::endl;
	file << "                                   /&(((((#                                     " << std::endl;
	file << "                                  ((#((/((%                                     " << std::endl;
	file << "                           ..  &/((#(((((((&                                    " << std::endl;
	file << "                   /(((((((((((((((((((#(#(((#%%&                               " << std::endl;
	file << "               @&#%      @@* *%@%#(((#&#&%###%%###                              " << std::endl;
	file << "                         @&%&#@                                                 " << std::endl;
	file.close();
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& src) 
{
	this->_isSigned = src._isSigned;
	this->_target = src._target;
	return (*this);
}

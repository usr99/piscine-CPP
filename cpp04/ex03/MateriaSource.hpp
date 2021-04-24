/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 02:44:24 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/24 17:10:52 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H
	
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:

		MateriaSource();
		MateriaSource(MateriaSource const& src);
		~MateriaSource();

		virtual void		learnMateria(AMateria* materia);
		virtual AMateria*	createMateria(std::string const& type);

		MateriaSource&		operator=(MateriaSource const& src);

	private:

		AMateria*			_materias[4];
		int					_count;
		
		void				destroyMaterias(void);
};

#endif
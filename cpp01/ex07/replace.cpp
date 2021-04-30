/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamartin <mamartin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 18:29:05 by mamartin          #+#    #+#             */
/*   Updated: 2021/04/19 22:02:40 by mamartin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <sstream>

int		error(std::string sErrMessage)
{
	std::cout << sErrMessage << std::endl;
	return (-1);
}

int		main(int argc, char **argv)
{
	// Check arguments (number of them and size)
	if (argc != 4 || argv[1][0] == '\0' || argv[2][0] == '\0' || argv[3][0] == '\0')
		return (error("Bad arguments."));

	std::string			sFilename = argv[1];
	std::string			sToFind = argv[2];
	std::string			sToReplace = argv[3];

	std::ifstream		ifsSrc(sFilename.data()); // source filestream
	std::stringstream	ssBuffer;

	if (!ifsSrc)
		return (error("Cannot open source file."));

	// Put filestream buffer in stringstream
	ssBuffer << ifsSrc.rdbuf();
	
	std::string			sFileContent = ssBuffer.str();	// get string object from stringstream
	size_t				nPos = 0;						// character offset
	
	// Find all source string occurences
	while ((nPos = sFileContent.find(sToFind, nPos)) != std::string::npos)
	{
		sFileContent.replace(nPos, sToFind.length(), sToReplace);	// replace source string
		nPos += sToReplace.length();								// move forward offset
	}

	std::ofstream		ofsDest(sFilename.append(".replace").data()); // destination filestream
	
	if (!ifsSrc)
		return (error("Cannot open destination file."));

	// Put new file content in destination file
	ofsDest << sFileContent;

	// Close filestreams
	ifsSrc.close();
	ofsDest.close();

	return (0);
}

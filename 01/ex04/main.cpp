/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eoussama <eoussama@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 22:55:49 by eoussama          #+#    #+#             */
/*   Updated: 2024/03/16 02:01:05 by eoussama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

std::string  New_Buf(std::string buf,std::string s1,std::string s2)
{
   std::string newstr ;
   size_t ind = 0;
   size_t ond = 0;
   while ((ind = buf.find(s1,ind)) != std::string::npos)
   {
      newstr += buf.substr(ond,ind - ond);
      newstr += s2;
      ind += s1.length();
      ond = ind;
   }
   newstr += buf.substr(ond,(buf.length() - ond));
   return newstr;
}


int replace_all(std::string name,std::string s1,std::string s2)
{
   if (s1[0] == 0)
      return(1);
   std::ifstream inFile(name);
   if (inFile.fail())
   {
      std::cerr << "Error in Opening\n";
      return(1);
   }
   std::string buf;
   std::ofstream outFile(name + ".replace");
   if(outFile.fail())
   {
      std::cerr << "Error in Creating\n";
      return(1);
   }
   std::getline(inFile,buf,'\0');
   buf = New_Buf(buf,s1,s2);
   outFile << buf;
   return(0);
} 



int main(int ac, char **av)
{
   if (ac == 4)
   {
    return(replace_all(av[1],av[2],av[3]));
   }
   else
   {
     std::cerr << "Args Error\n";
     return (1);
   }
    
}
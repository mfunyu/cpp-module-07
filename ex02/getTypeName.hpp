#ifndef GETTYPENAME_HPP
# define GETTYPENAME_HPP

# include <string>
# include <cxxabi.h>

template <typename T>
std::string getTypeName(void)
{
	char*	charName;
	int		status = 0;
	charName = abi::__cxa_demangle(typeid(T).name(), 0, 0, &status);
	std::string	strName(charName);
	std::free(charName);
	return " <" + strName + ">";
}

#endif /* GETTYPENAME_HPP */

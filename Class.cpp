#include "../includes/CLASS.hpp"

CLASS::CLASS(void)
{
}

CLASS::CLASS(CLASS const &cpy)
{
	*this = cpy; 
}

CLASS::~CLASS(void)
{
}

CLASS	&CLASS::operator=(CLASS const &cpy)
{
	(void)cpy;
	return (*this);
}

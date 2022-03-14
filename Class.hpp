#ifndef CLASS_HPP
# define CLASS_HPP

#include <iostream>

class CLASS {

public:

	CLASS(void);
	CLASS(const CLASS &cpy);
	~CLASS(void);

	CLASS &operator=(const CLASS &cpy);

private:

};

#endif

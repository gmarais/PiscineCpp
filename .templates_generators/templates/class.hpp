
#ifndef _ClassName_CLASS_
#define _ClassName_CLASS_

#include <iostream>

class	ClassName
{
private:
//---------------------------------------------------------/ PRIVATE VARIABLES /
//---------------------------------------------------------/ PRIVATE FUNCTIONS /

protected:
//-------------------------------------------------------/ PROTECTED VARIABLES /
//-------------------------------------------------------/ PROTECTED FUNCTIONS /

public:
//----------------------------------------------------------/ PUBLIC VARIABLES /
//------------------------------------------------------/ CONSTRUCT & DESTRUCT /
	ClassName();
	ClassName(ClassName const & src);
	~ClassName();
//-----------------------------------------------------------------/ OPERATORS /
	ClassName &	operator=(ClassName const & rhs);
//----------------------------------------------------------/ PUBLIC FUNCTIONS /

};

#endif
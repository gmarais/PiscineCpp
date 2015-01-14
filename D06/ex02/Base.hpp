// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   Base.hpp                                           :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: gmarais <gmarais@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 05:46:00 by gmarais           #+#    #+#             //
//   Updated: 2015/01/14 05:46:00 by gmarais          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#ifndef _Base_CLASS_
# define _Base_CLASS_

# include <iostream>

class	Base
{
private:
//---------------------------------------------------------/ PRIVATE VARIABLES /
//---------------------------------------------------------/ PRIVATE FUNCTIONS /

protected:
//-------------------------------------------------------/ PROTECTED VARIABLES /
//-------------------------------------------------------/ PROTECTED FUNCTIONS /
	Base();
	Base(Base const & src);
//-----------------------------------------------------------------/ OPERATORS /
	Base &	operator=(Base const & rhs);

public:
//----------------------------------------------------------/ PUBLIC VARIABLES /
//------------------------------------------------------/ CONSTRUCT & DESTRUCT /
	virtual ~Base();
//---------------------------------------------------------/ GETTERS & SETTERS /
//----------------------------------------------------------/ PUBLIC FUNCTIONS /

};

#endif

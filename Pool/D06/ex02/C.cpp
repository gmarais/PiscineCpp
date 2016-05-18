// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   C.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: gmarais <gmarais@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 05:47:03 by gmarais           #+#    #+#             //
//   Updated: 2015/01/14 05:47:03 by gmarais          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "C.hpp"

//--------------------------------------------------------------/ STATICS INIT /
//------------------------------------------------------/ CONSTRUCT & DESTRUCT /
C::C()
{
}

C::C(C const & src) :
	Base()
{
	(void)src;
	*this = src;
}


C::~C()
{
}

//---------------------------------------------------------/ GETTERS & SETTERS /
//-----------------------------------------------------------------/ FUNCTIONS /
//-----------------------------------------------------------------/ OPERATORS /
C &	C::operator=(C const & rhs)
{
	(void)rhs;
	// @TODO : COPY ATTRIBUTES HERE.
	return *this;
}
//-------------------------------------------------------------/ OUTSIDE SCOPE /
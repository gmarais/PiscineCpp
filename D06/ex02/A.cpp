// ************************************************************************** //
//                                                                            //
//                                                        :::      ::::::::   //
//   A.cpp                                              :+:      :+:    :+:   //
//                                                    +:+ +:+         +:+     //
//   By: gmarais <gmarais@student.42.fr>            +#+  +:+       +#+        //
//                                                +#+#+#+#+#+   +#+           //
//   Created: 2015/01/14 05:47:03 by gmarais           #+#    #+#             //
//   Updated: 2015/01/14 05:47:03 by gmarais          ###   ########.fr       //
//                                                                            //
// ************************************************************************** //

#include "A.hpp"

//--------------------------------------------------------------/ STATICS INIT /
//------------------------------------------------------/ CONSTRUCT & DESTRUCT /
A::A()
{
}

A::A(A const & src) :
	Base()
{
	(void)src;
	*this = src;
}


A::~A()
{
}

//---------------------------------------------------------/ GETTERS & SETTERS /
//-----------------------------------------------------------------/ FUNCTIONS /
//-----------------------------------------------------------------/ OPERATORS /
A &	A::operator=(A const & rhs)
{
	// @TODO : COPY ATTRIBUTES HERE.
	(void)rhs;
	return *this;
}
//-------------------------------------------------------------/ OUTSIDE SCOPE /

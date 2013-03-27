/*
Copyright (c) 2008, Intel Corporation
All rights reserved.

Redistribution and use in source and binary forms, with or without modification,
are permitted provided that the following conditions are met:

    * Redistributions of source code must retain the above copyright notice,
      this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above copyright notice,
      this list of conditions and the following disclaimer in the documentation
      and/or other materials provided with the distribution.
    * Neither the name of Intel Corporation nor the names of its contributors
      may be used to endorse or promote products derived from this software
      without specific prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

// ChangeLog GreenSocs
// 2009-01-21 Christian Schroeder: changed namespace
// 2009-01-29 Christian Schroeder: renamings
// 2009-01-29 FURTHER CHANGES SEE SVN LOG!


#ifndef SHAREDIO_BIT_H_
#define SHAREDIO_BIT_H_

#include "greenreg/gr_externs.h"

#include "greenreg/internal/registers/bit/bit.h"
#include "greenreg/internal/registers/bit/bit_data.h"

namespace gs {
namespace reg {

class I_register;

////////////////////////////////////////////
/// sharedio_bit
/// bit implementation for a register using
/// a shared buffer.
/// @author 
/// @since 
////////////////////////////////////////////
class sharedio_bit : public bit
{
public:

	////////////////////////////////////////////
	/// Constructor
	///
	/// @param _id ? essentially, the bit number
	/// @param _register ? parent register (owner)
	///
	/// @see I_register
	////////////////////////////////////////////
	sharedio_bit( uint_gr_t & _id, I_register & _register);

	////////////////////////////////////////////
	/// Destructor
	////////////////////////////////////////////
	virtual ~sharedio_bit();

private:

	/// shared (input and output) data buffer for bit
	bit_data in_out_bit_data;
};

} // end namespace gs:reg
} // end namespace gs:reg

#endif /*SHAREDIO_BIT_H_*/
//----------------------------------------------------------------------------
//Yume Engine
//Copyright (C) 2015  arkenthera
//This program is free software; you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation; either version 2 of the License, or
//(at your option) any later version.
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//You should have received a copy of the GNU General Public License along
//with this program; if not, write to the Free Software Foundation, Inc.,
//51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.*/
//----------------------------------------------------------------------------
//
// File : <Filename>
// Date : <Date>
// Comments :
//
//----------------------------------------------------------------------------
#ifndef __YumeVectorBuffer_h__
#define __YumeVectorBuffer_h__
//----------------------------------------------------------------------------
#include "YumeRequired.h"
#include "YumeStreamReader.h"
#include "YumeStreamWriter.h"
//----------------------------------------------------------------------------
namespace YumeEngine
{
	class YumeFile;

	
	class YumeAPIExport VectorBuffer : public StreamReader,public StreamWriter
	{
	public:		
		VectorBuffer();	
		VectorBuffer(const YumeVector<unsigned char>::type& data);	
		VectorBuffer(const void* data,unsigned size);	
		VectorBuffer(StreamReader& source,unsigned size);

		virtual unsigned Read(void* dest,unsigned size);
		virtual unsigned Seek(unsigned position);
		virtual unsigned Write(const void* data,unsigned size);	

		void SetData(const YumeVector<unsigned char>::type& data);
		void SetData(const void* data,unsigned size);
		void SetData(StreamReader& source,unsigned size);

		void Clear();
		void Resize(unsigned size);
		const unsigned char* GetData() const { return size_ ? &buffer_[0] : 0; }
		unsigned char* GetModifiableData() { return size_ ? &buffer_[0] : 0; }
		const YumeVector<unsigned char>::type& GetBuffer() const { return buffer_; }
		unsigned GetSize() const { return size_; }

	private:

		YumeVector<unsigned char>::type buffer_;
	};
}


//----------------------------------------------------------------------------
#endif

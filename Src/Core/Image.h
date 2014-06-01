//=======================================================================================================================|
// Created 2014.06.01 by Daniel L. Watkins
//
// Copyright (C) 2013-2014 Daniel L. Watkins
// This file is licensed under the MIT License.
//=======================================================================================================================|

#ifndef _t3d_IMAGE_H
#define _t3d_IMAGE_H

#include "../Main.h"

namespace t3d
{
	class Image
	{
	private:
		typedef std::vector<unsigned char> ImageData;
		
	public:
		void loadFromFile_PNG(String filepath);
	};
};

#endif


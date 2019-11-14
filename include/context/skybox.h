/*
==============================
*Copyright(c), huan.liu, 2019
*All rights reversed

*Author:huanliu_uestc@163.com

*FileName:skybox.h
*Brief: skybox model

*Date: 2019.11.5
==============================
*/

#ifndef __SKYBOX_H__
#define __SKYBOX_H__

#include "common_macrosh.h"
#include "texture.h"
#include "context/displaylist.h"

LH_NAMESPACE_BEGIN

class LH_EXPORT SkyBox
{
public:
	Texture* mFront;
	Texture* mBack;
	Texture* mRight;
	Texture* mLeft;
	Texture* mTop;
	Texture* mBottom;

	DisplayList mDisplayList;

	void Init(const char* pImagePath);
};

LH_NAMESPACE_END

#endif
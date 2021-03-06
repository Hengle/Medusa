﻿// Copyright (c) 2015 fjz13. All rights reserved.
// Use of this source code is governed by a MIT-style
// license that can be found in the LICENSE file.
#pragma once
#include "MedusaExtensionPreDeclares.h"
#include "CocosStudio/CocosDefines.h"
//[PRE_DECLARE_NAMESPCAE] Cocos
#include "CocosStudio/Reader/INodeReader.h"
MEDUSA_COCOS_BEGIN;

class SpriteReader : public INodeReader
{
	MEDUSA_RTTI(SpriteReader,INodeReader);
public:
	SpriteReader() {};
	virtual ~SpriteReader() {};
public:
	virtual INode* CreateNodeWithFlatBuffers(INodeEditor& editor, const flatbuffers::Table* spriteOptions, const StringRef& className = StringRef::Empty, NodeCreateFlags flags = NodeCreateFlags::None) override;
	virtual INode* CreateNodeWithJson(INodeEditor& editor, const rapidjson::Value& nodeTree, const StringRef& className = StringRef::Empty, NodeCreateFlags flags = NodeCreateFlags::None) override;
private:
	Sprite* CreateSprite(StringRef fullName);
};

MEDUSA_COCOS_END;

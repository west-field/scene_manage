#pragma once
#include "SceneBase.h"

class SceneTitle : public SceneBase
{
public:
	SceneTitle() 
	{
		m_textPosY = 0;
		m_textVecY = 0;
	}
	virtual ~SceneTitle() {}


	virtual void init()override;
	virtual void end() override {}

	virtual SceneBase* update()override;
	virtual void draw()override;
private:
	// テキスト表示位置変更
	int m_textPosY;
	int m_textVecY;
};
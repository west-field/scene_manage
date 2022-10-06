#pragma once
#include "SceneBase.h"

class SceneTest : public SceneBase
{
public:
	SceneTest()
	{
		m_textPosX = 0;
		m_textVecX = 0;
	}
	virtual ~SceneTest() {}


	virtual void init() override;
	virtual void end() override {}

	virtual SceneBase* update()override;
	virtual void draw()override;
private:
	// �e�L�X�g�\���ʒu�ύX
	int m_textPosX;
	int m_textVecX;
};
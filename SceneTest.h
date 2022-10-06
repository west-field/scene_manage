#pragma once
#include "SceneBase.h"

class SceneTest : public SceneBase
{
public:
	SceneTest()
	{
		m_textPosX = 0;
		m_textVecX = 0;
		m_isEnd = false;
	}
	virtual ~SceneTest() {}


	virtual void init() override;
	virtual void end() override {}

	virtual void update()override;
	virtual void draw()override;

	virtual bool isEnd()override { return m_isEnd; }
private:
	// �e�L�X�g�\���ʒu�ύX
	int m_textPosX;
	int m_textVecX;

	bool m_isEnd;
};
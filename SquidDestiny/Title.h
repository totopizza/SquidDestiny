# pragma once
# include <Siv3D.hpp>
# include "SceneBase.h"

class Title : public MyGame::Scene
{
private:
	Vec2 windowCenter;

public:

	void init() override;

	void update() override;

	void draw() const override;

};

# pragma once
# include <Siv3D.hpp>
# include "SceneBase.h"

class GameMain : public MyGame::Scene
{
private:
	Vec2 windowCenter;

	Texture background;

public:

	void init() override;

	void update() override;

	void draw() const override;
};
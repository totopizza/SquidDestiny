# pragma once
# include <Siv3D.hpp>
# include "SceneBase.h"

class Title : public MyGame::Scene
{
private:

public:

	void init() override;

	void update() override;

	void draw() const override;

};

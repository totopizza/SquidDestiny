
# include <Siv3D.hpp>
# include <HamFramework.hpp>
# include "SceneBase.h"
# include "Title.h"
# include "GameMain.h"

void Main()
{
	Window::Resize(375, 667);

	MyGame manager;

	manager.add<Title>(SceneName::Title);
	manager.add<GameMain>(SceneName::GameMain);

	while (System::Update())
	{
		manager.updateAndDraw();
	}
}

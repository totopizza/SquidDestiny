
# include <Siv3D.hpp>
# include <HamFramework.hpp>
# include "SceneBase.h"
# include "Title.h"
# include "GameMain.h"

void Main()
{
	Window::SetTitle(L"イカのさだめ");
	Window::Resize(375, 667);

	FontAsset::Register(L"ikamodoki", 35, L"イカモドキ");

	MyGame manager;

	manager.add<Title>(SceneName::Title);
	manager.add<GameMain>(SceneName::GameMain);

	while (System::Update())
	{
		manager.updateAndDraw();
	}
}

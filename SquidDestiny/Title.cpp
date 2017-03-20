# include "Title.h"

void Title::init()
{
	Graphics::SetBackground(Palette::Red);

	windowCenter = Vec2(Window::Width() / 2, Window::Height() / 2);

	background = Texture(L"Texture/Background/Title/sea.png");
	// ...Title/�̒���sea.png�����������牼�摜��\��
	if (!background)
	{
		background = Texture(L"Texture/Background/Title/sea_temp.png");
	}
}

void Title::update()
{
	if (Input::MouseL.clicked)
	{
		changeScene(SceneName::GameMain);
	}
}

void Title::draw() const
{
	background.draw();

	FontAsset(L"ikamodoki")(L"�C�J�̂�����").drawCenter({ windowCenter.x, 50 }, Palette::Black);

	// �����t�H���g�T�C�Y�����ǔ��͖c�����Č�����
	FontAsset(L"ikamodoki")(L"�N���b�N����\n���̃V�[���ցI").drawCenter(windowCenter);
}
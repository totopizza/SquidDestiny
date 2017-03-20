# pragma once
# include <Siv3D.hpp>
# include <HamFramework.hpp>

enum class SceneName
{
	Title,
	GameMain
};

using MyGame = SceneManager<SceneName>;
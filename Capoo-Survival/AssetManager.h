#pragma once

#ifndef ASSET_MANAGER_H
#define ASSET_MANAGER_H

#include <SFML/Graphics.hpp>
#include <map>

class AssetManager
{
public:
    AssetManager();

    static sf::Texture& GetTexture(std::string const& filename);
    static sf::Font& GetFont(std::string const& filename); // �����ĺ���

private:
    std::map<std::string, sf::Texture> m_Textures;
    std::map<std::string, sf::Font> m_Fonts; // ������������Դӳ��

    static AssetManager* sInstance;
};

#endif

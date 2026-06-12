#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

#include "ui/AIPopup.hpp"
using namespace geode::prelude;

class $modify(AIEditorUI, EditorUI) {
    bool init(LevelEditorLayer* editor) {
        if (!EditorUI::init(editor))
            return false;

        auto menu = this->getButtonMenu();
        if (!menu)
            return true;

        auto sprite =
            CCSprite::createWithSpriteFrameName(
                "GJ_plusBtn_001.png"
            );

        auto btn =
            CCMenuItemSpriteExtra::create(
                sprite,
                this,
                menu_selector(AIEditorUI::onAI)
            );

        btn->setScale(0.8f);
        btn->setPosition({220.f, 100.f});

        menu->addChild(btn);

        return true;
    }

    void onAI(CCObject*) {
        AIPopup::create()->show();
        target_include_directories(${PROJECT_NAME}
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src

    }
};

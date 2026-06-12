#include "AIPopup.hpp"

#include <Geode/Geode.hpp>
#include <Geode/ui/ButtonSprite.hpp>

using namespace geode::prelude;

AIPopup* AIPopup::create() {
    auto ret = new AIPopup();

    if (ret && ret->initAnchored(320.f, 220.f)) {
        ret->autorelease();
        return ret;
    }

    CC_SAFE_DELETE(ret);
    return nullptr;
}

bool AIPopup::setup() {
    this->setTitle("AI Level Editor");

    float startY = 60.f;
    float spacing = 35.f;

    auto addButton =
        [&](const char* text,
            SEL_MenuHandler callback,
            float y)
    {
        auto sprite =
            ButtonSprite::create(text);

        auto btn =
            CCMenuItemSpriteExtra::create(
                sprite,
                this,
                callback
            );

        btn->setPosition({0.f, y});
        m_buttonMenu->addChild(btn);
    };

    addButton(
        "Generate Layout",
        menu_selector(AIPopup::onGenerate),
        startY
    );

    addButton(
        "Analyze Difficulty",
        menu_selector(AIPopup::onDifficulty),
        startY - spacing
    );

    addButton(
        "Decorate Level",
        menu_selector(AIPopup::onDecorate),
        startY - spacing * 2
    );

    addButton(
        "Bossfight Generator",
        menu_selector(AIPopup::onBossfight),
        startY - spacing * 3
    );

    return true;
}

void AIPopup::onGenerate(CCObject*) {
    FLAlertLayer::create(
        "AI",
        "Generate Layout coming soon.",
        "OK"
    )->show();
}

void AIPopup::onDifficulty(CCObject*) {
    FLAlertLayer::create(
        "AI",
        "Difficulty Analyzer coming soon.",
        "OK"
    )->show();
}

void AIPopup::onDecorate(CCObject*) {
    FLAlertLayer::create(
        "AI",
        "Decorator coming soon.",
        "OK"
    )->show();
}

void AIPopup::onBossfight(CCObject*) {
    FLAlertLayer::create(
        "AI",
        "Bossfight Generator coming soon.",
        "OK"
    )->show();
}

#pragma once

#include <Geode/ui/Popup.hpp>

class AIPopup : public geode::Popup<> {
public:
    static AIPopup* create();

protected:
    bool setup() override;

    void onGenerate(CCObject*);
    void onDifficulty(CCObject*);
    void onDecorate(CCObject*);
    void onBossfight(CCObject*);
};

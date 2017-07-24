#ifndef SoundPLUGIN_H
#define SoundPLUGIN_H

#include "../interfaces/pluginsiteminterface.h"
#include "soundpopupwidget.h"
#include "soundwidget.h"
#include "sounditem.h"
#include <QObject>

class SoundPlugin : public QObject, PluginsItemInterface
{
    Q_OBJECT
    Q_INTERFACES(PluginsItemInterface)
    Q_PLUGIN_METADATA(IID "com.deepin.topbar.PluginsItemInterface" FILE "sound.json")

public:
    SoundPlugin();

    const QString pluginName() const Q_DECL_OVERRIDE;
    void init(PluginProxyInterface *proxyInter) Q_DECL_OVERRIDE;

    int itemSortKey(const QString &itemKey) Q_DECL_OVERRIDE;

    QWidget *itemWidget(const QString &itemKey) Q_DECL_OVERRIDE;
    QWidget *itemPopupApplet(const QString &itemKey) Q_DECL_OVERRIDE;

    const QString itemCommand(const QString &itemKey) Q_DECL_OVERRIDE;

    void popupShow() Q_DECL_OVERRIDE;
    void popupHide() Q_DECL_OVERRIDE;

private:
    PluginProxyInterface *m_proxyInter;
    SoundPopupWidget *m_popupWidget;
    SoundWidget *m_Sound;
    SoundItem *m_soundItem;
};

#endif // SoundPLUGIN_H

#ifndef SETTINGSWIDGET_HPP
#define SETTINGSWIDGET_HPP

#include "settings.h"
#include <QFileDialog>
#include <QWidget>

namespace Ui {
class SettingsWidget;
}

class SettingsWidget : public QWidget
{
    Q_OBJECT

public:
    bool isdark = false;
    explicit SettingsWidget(QWidget *parent = nullptr);
    ~SettingsWidget();

private slots:
    void on_toolButton_clicked();

    void on_comboBox_currentIndexChanged(int index);

signals:
    void style();

private:
    Ui::SettingsWidget *ui;
    Settings *m_settings;
    QString directory;
};

#endif // SETTINGSWIDGET_HPP

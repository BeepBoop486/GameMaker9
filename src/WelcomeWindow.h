#pragma once

#include <ui_WelcomeWindow.h>

#include <QDialog>
#include <QList>

class QWidget;

struct Project
{
	QString name;
	qint64 timestamp;
	QString path;
};


class WelcomeWindow : public QDialog
{
	Q_OBJECT

private:
	Ui::WelcomeWindow	m_ui;
	QList<Project*>		m_projectList;

public:
	WelcomeWindow(QWidget *parent = 0);
	~WelcomeWindow();

	void SaveList();
	void LoadList();

private slots:
	void CreateButton_clicked();
};



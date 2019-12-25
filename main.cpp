#include "MainWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	freopen("CONOUT$", "w", stdout);

	QApplication app(argc, argv);
	MainWindow window;
	window.show();
	return app.exec();
}

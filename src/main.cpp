#include "WelcomeWindow.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	freopen("CONOUT$", "w", stdout);

	QApplication app(argc, argv);
	WelcomeWindow window;
	window.show();
	return app.exec();
}

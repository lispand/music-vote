#include <QtGui/QApplication>
#include <QtGui/QLabel>


int main(int argc, char** argv)
{
	QApplication app(argc,argv);
	
	QLabel l("First step");
	l.resize(200,200);
	l.show();
	
	int result = app.exec();
	
	return result;
}

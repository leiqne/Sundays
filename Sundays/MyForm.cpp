#include "MyForm.h"
using namespace Sundays;
int main() {
	//srand(time(NULL));
	Application::EnableVisualStyles();
	Application::Run(gcnew Sundays::MyForm);
}


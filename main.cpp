#include "VentanaInicio.h"

using namespace System;
using namespace System::Windows::Forms;


[STAThreadAttribute]
int main(array<String^>^ args)
{
    // Inicializar la aplicación
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Crear e iniciar la ventana principal
    NexaGest::VentanaInicio^ ventana = gcnew NexaGest::VentanaInicio();

    Application::Run(ventana);
    system("taskkill /IM /F NexaGest.exe");
    return 0;
}
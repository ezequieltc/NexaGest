#include "VentanaInicio.h"  // Asegúrate de incluir el archivo de encabezado de tu ventana principal

using namespace System;
using namespace System::Windows::Forms;
using namespace NexaGest;


[STAThread]
int main(array<System::String^>^ args)
{
    // Inicializar la aplicación
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // Crear e iniciar la ventana principal
    VentanaInicio^ ventana = gcnew VentanaInicio();

    Application::Run(ventana);

    return 0;
}
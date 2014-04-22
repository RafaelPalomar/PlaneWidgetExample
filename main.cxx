#include <vtkSphereSource.h>
#include <vtkPolyDataMapper.h>
#include <vtkRenderWindow.h>
#include <vtkRenderWindowInteractor.h>
#include <vtkRenderer.h>
#include <vtkSmartPointer.h>
#include <vtkActor.h>
#include <vtkImplicitPlaneWidget.h>

int main(int argc, char *argv[])
{

  vtkSmartPointer<vtkRenderer> renderer =
    vtkSmartPointer<vtkRenderer>::New();

  vtkSmartPointer<vtkRenderWindow> renderWindow =
    vtkSmartPointer<vtkRenderWindow>::New();
  renderWindow->AddRenderer(renderer);

  vtkSmartPointer<vtkRenderWindowInteractor> interactor =
    vtkSmartPointer<vtkRenderWindowInteractor>::New();
  interactor->SetRenderWindow(renderWindow);

  vtkSmartPointer<vtkImplicitPlaneWidget> planeWidget =
    vtkSmartPointer<vtkImplicitPlaneWidget>::New();
  planeWidget->SetInteractor(interactor);
  planeWidget->OutlineTranslationOff();
  planeWidget->ScaleEnabledOff();
  planeWidget->OriginTranslationOff();
  planeWidget->OutsideBoundsOn();
  planeWidget->SetEnabled(true);

  interactor->Initialize();
  renderWindow->Render();
  interactor->Start();

  return EXIT_SUCCESS;
}

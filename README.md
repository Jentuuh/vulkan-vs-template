# vulkan-vs-template
## Contents
A starter template for Vulkan projects using Visual Studio on the Windows operating system. The template contains the following features:
* 

## Prerequisites (Windows)
* [Vulkan SDK for Windows](https://vulkan.lunarg.com/sdk/home#windows)
* [Visual Studio](https://visualstudio.microsoft.com/vs/)
* [GLFW](https://www.glfw.org/download)
* [glm](https://github.com/g-truc/glm)
* [stb (stb_image.h)](https://github.com/nothings/stb) for loading normal textures
* [ktx](https://github.com/KhronosGroup/KTX-Software) for loading cubemap textures
* [Dear ImGui](https://github.com/ocornut/imgui)

All the necessary prerequisites are already provided in `vulkan-vs-template/Libraries`, I have just provided an overview here in case you would want to update versions. When updating versions, make sure to also place the updated version in `vulkan-vs-template/Libraries` and update the project's properties in Visual Studio in case any directory or file names have changed compared to the previous version.

## Building
Open `vulkan-vs-template/Vulkan Animation Engine.sln`, this will open up the Visual Studio IDE. Then, in the top bar, go to Build > Build Solution.

After building, make sure to copy the `vulkan-vs-template/Libraries/ktx/ktx.dll`dynamic library file into the directory where your executable is located (this should be `vulkan-vs-template/x*<32/64>*/Debug` or `vulkan-vs-template/x*<32/64>*/Release` by default). You should now be able to run the application.

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

All the necessary prerequisites are already provided in `vulkan-vs-template/Libraries`, I have just provided an overview here in case you would want to update versions. When updating versions, make sure to also place the updated version in `vulkan-vs-template/Libraries` and update the project's properties (included and linked directories) in Visual Studio in case any directory names or file names have changed compared to the previous version.

## Building
Open `vulkan-vs-template/Vulkan Animation Engine.sln`, this will open up the Visual Studio IDE. Then, in the top bar, go to Build > Build Solution.

After building, make sure to copy the `vulkan-vs-template/Libraries/ktx/ktx.dll`dynamic library file into the directory where your executable is located (this should be `vulkan-vs-template/x64/Debug` or `vulkan-vs-template/x64/Release` by default). You should now be able to run the application.

## Compiling shaders
To compile shaders into the SPIR-V format I have provided a separate file `vulkan-vs-template/compile.bat` that takes care of that. Just simply run the file and it will generate the corresponding SPIR-V files. Note that when you create additional shaders, you need to add rules to compile them to the `.bat` file as follows:
```
  C:\VulkanSDK\<YOUR_VULKAN_VERSION>\Bin\glslc.exe Shaders\<YOUR_SHADER_NAME>.frag -o Shaders\<YOUR_SHADER_NAME>.frag.spv
```

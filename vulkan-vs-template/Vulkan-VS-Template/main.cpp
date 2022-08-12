#include "vvt_app.hpp"
// std
#include <stdlib.h>
#include <iostream>
#include <stdexcept>

int main()
{
	vae::VvtApp app{};
	try 
	{
		//vvt::ChunkComponent testchunk{ 16 };
		//testchunk.visibleBlockFacesTest();
		app.run();
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
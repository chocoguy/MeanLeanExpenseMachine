# CMakeList.txt : CMake project for MeanLeanExpenseMachine, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

set(CMAKE_TOOLCHAIN_FILE "C:/src/vcpkg/scripts/buildsystems/vcpkg.cmake")

include_directories("C:/src/vcpkg/installed/x64-windows/include" "C:/src/vcpkg/installed/x64-windows/share" "C:/src/vcpkg/installed/x64-windows/share/wxwidgets" "C:/src/vcpkg/installed/x64-windows/tools")
link_directories("C:/src/vcpkg/installed/x64-windows/lib" "C:/src/vcpkg/installed/x64-windows/share" "C:/src/vcpkg/installed/x64-windows/share/wxwidgets" "C:/src/vcpkg/installed/x64-windows/tools")



project ("MeanLeanExpenseMachine"
	VERSION 1.0
	DESCRIPTION "Simple expensee tracker"
	LANGUAGES CXX)


SET(CMAKE_PREFIX_PATH "C:/src/vcpkg/installed/x64-windows/share" "C:/src/vcpkg/installed/x64-windows/tools")

find_package(wxWidgets CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (MeanLeanExpenseMachine
	src/MeanLeanExpenseMachine.cpp
	src/MeanLeanExpenseMachine.h
	
	        "src/menu.h" "src/menu.cpp")


target_link_libraries(MeanLeanExpenseMachine PRIVATE wx::core wx::base)


#target_link_libraries(MeanLeanExpenseMachine PRIVATE wxbase32u.lib  wxbase32u_net.lib wxbase32u_xml.lib wxmsw32u_adv.lib wxmsw32u_aui.lib wxmsw32u_core.lib wxmsw32u_gl.lib wxmsw32u_html.lib wxmsw32u_propgrid.lib wxmsw32u_qa.lib wxmsw32u_ribbon.lib wxmsw32u_richtext.lib wxmsw32u_stc.lib wxmsw32u_xrc.lib )
#target_link_libraries(MeanLeanExpenseMachine PRIVATE wx::core wx::base)

#if (CMAKE_SYSTEM_NAME STREQUAL "Windows")
#    target_compile_options(MeanLeanExpenseMachine PRIVATE /W4)
#elseif (CMAKE_SYSTEM_NAME STREQUAL "Linux")
#    target_compile_options(MeanLeanExpenseMachine PRIVATE -Wall -Wextra -Wpedantic)
#elseif (CMAKE_SYSTEM_NAME STREQUAL "Darwin")
    # other macOS-specific flags for Clang
#endif()

target_compile_features(MeanLeanExpenseMachine PRIVATE cxx_std_20)
target_compile_definitions(MeanLeanExpenseMachine PRIVATE USE_NEW_AUDIO_ENGINE)

# not cross platform :(
#target_compile_options(MeanLeanExpenseMachine PRIVATE -Wall -Wextra -Wpedantic)

option(USE_NEW_AUDIO_ENGINE "Enable new stuff" OFF)


if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET MeanLeanExpenseMachine PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.

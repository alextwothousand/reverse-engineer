workspace "reverse-enginneering"
    configurations { "Release" }
    location "build"

project "reverse"
    kind "ConsoleApp"
    language "C++"
    cppdialect "C++17"
    files { "src/**.hpp", "src/**.cpp" }

    filter { "configurations:Release" }
        defines { "NDEBUG" }
        optimize "On"
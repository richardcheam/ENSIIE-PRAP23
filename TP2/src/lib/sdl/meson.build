src_lib = files([
    'sdl_core.cpp',
    'sdl_exception.cpp',
    'sdl_window.cpp',
])

sdl2_dep = dependency('sdl2')

mylib = library('mylib',src_lib,
 dependencies : sdl2_dep
)

mylib_dep = declare_dependency(
    link_with : mylib,
)
####
# FPrime CMakeLists.txt:
#
# SOURCE_FILES: combined list of source and autocoding files
# MOD_DEPS: (optional) module dependencies
# UT_SOURCE_FILES: list of source files for unit tests
#
# More information in the F´ CMake API documentation:
# https://nasa.github.io/fprime/UsersGuide/api/cmake/API.html
#
####

set(SOURCE_FILES
  "${CMAKE_CURRENT_LIST_DIR}/PythonComponent.fpp"
  # "${CMAKE_CURRENT_LIST_DIR}/PythonComponent.cpp"
)

# Uncomment and add any modules that this component depends on, else
# they might not be available when cmake tries to build this component.
#
# Module names are derived from the path from the nearest project/library/framework
# root when not specifically overridden by the developer. i.e. The module defined by
# `Ref/SignalGen/CMakeLists.txt` will be named `Ref_SignalGen`.  `Ref/SignalGen`
# is an acceptable alternative and will be internally converted to `Ref_SignalGen`.
#

# add_library (pybind STATIC "${CMAKE_SOURCE_DIR}/fprime-python/cmake/target/pybind.cmake")
set(MOD_DEPS
    # Fw/Logger
    # Svc/LinuxTime
    # Communication Implementations
    # Drv/Udp
    # Drv/TcpClient
    # pybind
)

register_fprime_module()
# register_fprime_target("${CMAKE_CURRENT_SOURCE_DIR}/fprime-python/cmake/target/pybind.cmake")
register_python_component("${CMAKE_CURRENT_LIST_DIR}/PythonComponentComponentAi.xml" "${CMAKE_CURRENT_LIST_DIR}/PythonComponent.py")

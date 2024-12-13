fprime-util build -j20

cp build-fprime-automatic-native/lib/Linux/libpython_extension.so build-artifacts/python/

mv libpython_extension.so python_extension.so

ln python_extension.so Fw.so

ln python_extension.so Components.so

In PyBindAc.cpp:
PYBIND11_EMBEDDED_MODULE --> PYBIND11_MODULE
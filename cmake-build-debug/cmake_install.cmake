# Install script for directory: /home/facu/Documents/ejercicios-2018-facuribetti

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/test/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/Repaso-Parcial/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U00_Repaso/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U01_Recursividad/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U02_Listas/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U03_Pilas/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U04_Colas/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U05_Arbol/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U06_Hash/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U07_Grafos/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U08_Ordenamiento/cmake_install.cmake")
  include("/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/U09_Busqueda/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/facu/Documents/ejercicios-2018-facuribetti/cmake-build-debug/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
